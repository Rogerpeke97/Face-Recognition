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

int main (){
  std::thread window(&WindowManager::createWindow, &windowManager);
  window.join();
  return 0;
}
