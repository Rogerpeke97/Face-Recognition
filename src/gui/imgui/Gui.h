#pragma once
#include <SDL2/SDL.h>

class Gui {
  private:
    SDL_Window *currentWindow = nullptr;
    WindowSpecs windowSpecs;
  public:
    bool isRunning = false;
    void init(SDL_Window *currentWindow, WindowSpecs windowSpecs);
    void render();
    void destroy();
};
