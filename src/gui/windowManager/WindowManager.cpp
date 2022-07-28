#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "WindowManager.h"
#include <variant>

void WindowManager::createWindow() {
  std::cout << "num of displays: " << SDL_GetNumVideoDisplays() << std::endl;
  std::cout << "width and height: " << windowWidth << " " << windowHeight << std::endl;
  SDL_DisplayMode displayMode;
  SDL_Init(SDL_INIT_VIDEO);
  for(int i = 0; i < SDL_GetNumVideoDisplays(); ++i){
    int hasDisplay = SDL_GetCurrentDisplayMode(i, &displayMode); // Should return 0 if the function passes
    if(hasDisplay == 0) {
      windowWidth = displayMode.w;
      windowHeight = displayMode.h;
      continue;
    }
    std::cout << "hasDisplay: " << hasDisplay << std::endl;
    SDL_Log("Could not get display mode for video display #%d: %s", i, SDL_GetError());
  }
  SDL_Quit();
  SDL_GetCurrentDisplayMode(0, &displayMode);
  unsigned int windowFlags = SDL_WINDOW_OPENGL;
  currentWindow = SDL_CreateWindow("Face recognition", 0, 0, windowWidth, windowHeight, windowFlags);
  assert(currentWindow);
  openGLContextForCurrentWindow = SDL_GL_CreateContext(currentWindow);
  std::cout << "OPEN GL CONTEXT FOR WINDOW IN WINDOW MANAGER " << openGLContextForCurrentWindow << "\n" << std::endl;  
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
    }
  }
}
std::vector<std::variant<SDL_Window*, SDL_GLContext>> WindowManager::getWindowAndGLContext() {
  std::vector<std::variant<SDL_Window*, SDL_GLContext>> windowAndGLContext(2);
  windowAndGLContext.push_back(currentWindow);
  windowAndGLContext.push_back(openGLContextForCurrentWindow);
  return windowAndGLContext;
}
bool WindowManager::isWindowActive(){
  return isWindowOpen;
}
