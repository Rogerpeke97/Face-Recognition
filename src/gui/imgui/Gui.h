#pragma once
#include <SDL2/SDL.h>

class Gui {
  private:
    SDL_Window *currentWindow = nullptr;
  public:
    bool isRunning = false;
    void init();
    void render(SDL_Event *windowEvent);
    void destroy();
};
