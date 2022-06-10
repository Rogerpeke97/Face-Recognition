#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>

namespace WindowManager {
  void createWindow() {
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
    SDL_Window *window = SDL_CreateWindow("OpenGL Test", 0, 0, windowWidth, windowHeight, windowFlags);
    assert(window);
    SDL_GLContext windowContext = SDL_GL_CreateContext(window);
    bool isWindowOpen = true;
    bool isWindowFullScreen = false;
    while(isWindowOpen){
      SDL_Event windowEvents;
      SDL_Event currentEvent = SDL_PollEvent(*windowEvents);
      while(&currentEvent){
        ImGui_ImplSDL2_ProcessEvent(&currentEvent);
        if (currentEvent.type == SDL_KEYDOWN){
          int keyPressed = currentEvent.key.keysym.sym
          if(keyPressed == SDLK_ESCAPE){
            isWindowOpen = false;
            break;
          }
          if(keyPressed == SDLK_f) {
            isWindowFullScreen = !isWindowFullScreen;
            if (isWindowFullScreen){
              SDL_SetWindowFullscreen(window, windowFlags | SDL_WINDOW_FULLSCREEN_DESKTOP);
            } 
            else{
              SDL_SetWindowFullscreen(window, windowFlags);
            }
            break;
          }
        }
        else if (currentEvent.type == SDL_QUIT){
          isWindowOpen = false;
        }
      }
    }

  }
};