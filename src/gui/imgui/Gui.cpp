#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>
#include "Gui.h"

void Gui::init(SDL_Window* currentWindow, SDL_GLContext openGLContextForCurrentWindow) {
  std::cout << "IN I'm GUI" << currentWindow << "GL CONTEXT" << openGLContextForCurrentWindow << std::endl;
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO& inputOutput = ImGui::GetIO(); 
  (void)inputOutput;//This (void) casting construct is a no-op that makes the warning of unused parameters/variables go away.
  ImGui::StyleColorsDark();
  // ImGui_ImplSDL2_InitForOpenGL(currentWindow, openGLContextForCurrentWindow);
  // ImGui_ImplOpenGL3_Init("#version 130");
}
