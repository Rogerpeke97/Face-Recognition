#include <stdio.h>
#include <iostream>
#include <thread>
#include "gui/windowManager/WindowManager.h"
#include "gui/windowManager/WindowManager.cpp"
#include "gui/imgui/Gui.h"
#include "gui/imgui/Gui.cpp"
#include "gui/program/Program.h"
#include "image-processor/ImageProcessor.h"
#include "image-processor/ImageProcessor.cpp"
#include <SDL2/SDL.h>
#include <neural-system/NeuralSystem.h>

WindowManager windowManager;
Gui gui;
ImageProcessor imageProcessor;

int main (){
  std::thread window(&WindowManager::createWindow, &windowManager);
  std::thread imageProcess(&ImageProcessor::readImage, &imageProcessor);
  imageProcess.join();
  window.join();
  NeuralSystem neuralSystem();
  return 0;
}
