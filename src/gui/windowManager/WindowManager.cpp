#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "WindowManager.h"
#include <map>
#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>
#include "../program/Program.h"

void WindowManager::createWindow() {
  std::cout << "num of displays: " << SDL_GetNumVideoDisplays() << std::endl;
  std::cout << "width and height: " << windowSpecs.windowWidth << " " << windowSpecs.windowHeight << std::endl;
  SDL_DisplayMode displayMode;
  SDL_Init(SDL_INIT_VIDEO);
  for(int i = 0; i < SDL_GetNumVideoDisplays(); ++i){
    int hasDisplay = SDL_GetCurrentDisplayMode(i, &displayMode); // Should return 0 if the function passes
    if(hasDisplay == 0) {
      // windowSpecs.windowWidth = displayMode.w;
      // windowSpecs.windowHeight = displayMode.h;
      continue;
    }
    std::cout << "hasDisplay: " << hasDisplay << std::endl;
    SDL_Log("Could not get display mode for video display #%d: %s", i, SDL_GetError());
  }
  SDL_Quit();
  SDL_GetCurrentDisplayMode(0, &displayMode);
  unsigned int windowFlags = SDL_WINDOW_OPENGL;
  currentWindow = SDL_CreateWindow("Face recognition", 0, 0, windowSpecs.windowWidth, windowSpecs.windowHeight, windowFlags);
  assert(currentWindow);
  isWindowOpen = true;
  bool isWindowFullScreen = false;
  while(isWindowOpen){
    SDL_Event windowEvent;
    while(SDL_PollEvent(&windowEvent)){
      if (windowEvent.type == SDL_KEYDOWN){
        int keyPressed = windowEvent.key.keysym.sym;
        if(keyPressed == SDLK_ESCAPE){
          isWindowOpen = false;
          break;
        }
        if(keyPressed == SDLK_f) {
          isWindowFullScreen = !isWindowFullScreen;
          if (isWindowFullScreen){
            SDL_SetWindowFullscreen(currentWindow, windowFlags | SDL_WINDOW_FULLSCREEN_DESKTOP);
          } 
          else{
            SDL_SetWindowFullscreen(currentWindow, windowFlags);
          }
          break;
        }
      }
      else if (windowEvent.type == SDL_QUIT){
        isWindowOpen = false;
      }
      if(gui.isRunning){
        gui.render();
      }
    }
  }
  gui.destroy();
}
bool WindowManager::isWindowActive(){
  return isWindowOpen;
}
SDL_Window *WindowManager::getActiveWindow(){
  return currentWindow;
}
WindowSpecs WindowManager::getWindowSpecs(){
  return windowSpecs;
}
