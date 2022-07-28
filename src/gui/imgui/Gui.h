#pragma once
#include <SDL2/SDL.h>

class Gui {
  public:
    void init(SDL_Window* currentWindow, SDL_GLContext openGLContextForCurrentWindow);
};
