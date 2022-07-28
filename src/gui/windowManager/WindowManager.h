#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>
#include <vector>
#include <variant>

class WindowManager {
  private: 
    int windowWidth = 800;
    int windowHeight = 600;
    SDL_Window* currentWindow = nullptr;
    SDL_GLContext openGLContextForCurrentWindow = nullptr;
    bool isWindowOpen = false;
  public:
    void createWindow();
    bool isWindowActive();
    std::vector<std::variant<SDL_Window*, SDL_GLContext>> getWindowAndGLContext();
};
