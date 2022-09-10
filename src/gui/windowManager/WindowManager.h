#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>

typedef struct WindowSpecs{
  int windowWidth;
  int windowHeight;
} windowSpecs;
class WindowManager {
  private: 
    SDL_Window *currentWindow = nullptr;
    bool isWindowOpen = false;
    WindowSpecs windowSpecs = {
      800,
      600
    };
  public:
    void createWindow();
    bool isWindowActive();
    SDL_Window *getActiveWindow();
    WindowSpecs getWindowSpecs();
};
