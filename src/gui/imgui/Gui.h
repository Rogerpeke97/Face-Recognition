#pragma once
#include <SDL2/SDL.h>

class Gui {
  public:
    void init();
    void processKeyEvent(SDL_Event *windowEvent);
    void render();
    void destroy();
};
