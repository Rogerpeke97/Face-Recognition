#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <SDL2/SDL.h>
#include "gui/windowManager/WindowManager.h"
#include "gui/windowManager/WindowManager.cpp"
#include "gui/imgui/Gui.h"
#include "gui/imgui/Gui.cpp"
#include "gui/program/Program.h"
#include "image-processor/ImageProcessor.h"
#include "image-processor/ImageProcessor.cpp"
#include "neural-system/NeuralSystem.h"
#include "neural-system/NeuralSystem.cpp"

WindowManager windowManager;
Gui gui;
ImageProcessor imageProcessor;

int randNumBetween(int max, int min){
  return rand() % (max - min + 1) + min;
}

void printFakePixels(std::vector<FakePixel> fakePixels){
  for(std::size_t i = 0; i < fakePixels.size(); i++){
    std::cout << "Pixel " << i << " x: " << fakePixels[i].x << " y: " << fakePixels[i].y << " r: " << fakePixels[i].r << " g: " << fakePixels[i].g << " b: " << fakePixels[i].b << std::endl;
  }
}

int main (){
  // std::thread window(&WindowManager::createWindow, &windowManager);
  // std::thread imageProcess(&ImageProcessor::readImage, &imageProcessor);
  // imageProcess.join();
  // window.join();
  int amountOfPixels = 25;
  int pixelCol = 5;
  int pixelRow = 5;
  std::vector<FakePixel> fakePixels;
  fakePixels.reserve(amountOfPixels);
  for(int col = 0; col < pixelCol; col++){
    for(int row = 0; row < pixelRow; row++){
      fakePixels.push_back(FakePixel{col, row, randNumBetween(255, 0), randNumBetween(255, 0), randNumBetween(255, 0)});
    }
  }
  printFakePixels(fakePixels);
  NeuralSystem neuralSystem;
  neuralSystem.computeData(fakePixels);
  return 0;
}
