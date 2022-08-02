#include <stdio.h>
#include <iostream>
#include <variant>
#include <vector>
#include <thread>
#include "gui/windowManager/WindowManager.h"
#include "gui/windowManager/WindowManager.cpp"
#include "gui/imgui/Gui.h"
#include "gui/imgui/Gui.cpp"
#include <SDL2/SDL.h>

int main (){
  WindowManager windowManager;
  Gui gui;
  std::vector<std::variant<SDL_Window*, SDL_GLContext>> windowAndGLContext = windowManager.getWindowAndGLContext();
  bool programStarted = false;
  std::thread window(&WindowManager::createWindow, &windowManager);
  while(windowManager.isWindowActive() && !programStarted){
    SDL_Window* currentWindow = std::get<SDL_Window*>(windowAndGLContext[0]);
    SDL_GLContext openGLContextForCurrentWindow = std::get<SDL_Window*>(windowAndGLContext[1]);
    std::thread guiInterface(&Gui::init, gui, currentWindow, openGLContextForCurrentWindow);
    guiInterface.join();
    programStarted = true;
  }
  window.join();
  return 0;
}
