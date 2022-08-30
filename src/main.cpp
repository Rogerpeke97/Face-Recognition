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

void startTheProgram(WindowManager &windowManager, Gui &gui, bool &programStarted, std::vector<std::variant<SDL_Window*, SDL_GLContext>> &windowAndGLContext) {
  while(!windowManager.isWindowActive()){
    std::cout << "waiting for window to be active" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  if(windowManager.isWindowActive() && !programStarted){
    SDL_Window* currentWindow = std::get<SDL_Window*>(windowAndGLContext[0]);
    SDL_GLContext openGLContextForCurrentWindow = std::get<SDL_Window*>(windowAndGLContext[1]);
    gui.init(currentWindow, openGLContextForCurrentWindow);
    programStarted = true;
  }
}

int main (){
  WindowManager windowManager;
  Gui gui;
  std::vector<std::variant<SDL_Window*, SDL_GLContext>> windowAndGLContext = windowManager.getWindowAndGLContext();
  bool programStarted = false;
  std::thread window(&WindowManager::createWindow, &windowManager);
  std::thread programRunning(&startTheProgram, std::ref(windowManager), std::ref(gui), std::ref(programStarted), std::ref(windowAndGLContext));
  window.join();
  programRunning.join();
  return 0;
}
