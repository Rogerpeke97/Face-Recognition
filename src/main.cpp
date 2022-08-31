#include <stdio.h>
#include <iostream>
#include <variant>
#include <vector>
#include <thread>
#include "gui/windowManager/WindowManager.h"
#include "gui/windowManager/WindowManager.cpp"
#include "gui/imgui/Gui.h"
#include "gui/imgui/Gui.cpp"
#include "gui/program/Program.h"
#include <SDL2/SDL.h>

WindowManager windowManager;
Gui gui;

void startTheProgram(WindowManager &windowManager, Gui &gui, bool &programStarted) {
  while(!windowManager.getActiveWindow()){
    std::cout << "waiting for window to be active" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  if(!programStarted){
    gui.init(windowManager.getActiveWindow(), windowManager.getWindowSpecs());
    programStarted = true;
  }
}

int main (){
  bool programStarted = false;
  std::thread window(&WindowManager::createWindow, &windowManager);
  std::thread programRunning(&startTheProgram, std::ref(windowManager), std::ref(gui), std::ref(programStarted));
  window.join();
  programRunning.join();
  return 0;
}
