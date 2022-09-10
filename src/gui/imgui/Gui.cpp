#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>
#include "Gui.h"
#include "../program/Program.h"

void Gui::init() {
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO& inputOutput = ImGui::GetIO(); 
  (void)inputOutput;//This (void) casting construct is a no-op that makes the warning of unused parameters/variables go away.
  ImGui::StyleColorsDark();
  SDL_GLContext ctxCurrWindow = SDL_GL_CreateContext(windowManager.getActiveWindow());
  ImGui_ImplSDL2_InitForOpenGL(windowManager.getActiveWindow(), ctxCurrWindow);
  ImGui_ImplOpenGL3_Init("#version 130");
}

void Gui::processKeyEvent(SDL_Event *windowEvent){
  ImGui_ImplSDL2_ProcessEvent(windowEvent);
}

void Gui::createTopNavBar () {
  ImGui::BeginMainMenuBar();
  if (ImGui::BeginMenu("File")){
    if (ImGui::MenuItem("New Simulation", "CTRL+N")){
      std::cout << "New Sim\n";
    }
    ImGui::EndMenu();
  }
  ImGui::EndMainMenuBar();
  // if(ImGui::Begin("", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar)){

  // }
  // ImGui::EndMenu();
  // if (ImGui::BeginMenu("File"))
  // {
  //   if (ImGui::MenuItem("Exit"))
  //   {
  //     // app->Close();
  //   }
  // }
}

void Gui::render() {
  WindowSpecs windowSpecs = windowManager.getWindowSpecs();
  ImGui_ImplOpenGL3_NewFrame();
  ImGui_ImplSDL2_NewFrame(windowManager.getActiveWindow());
  ImGui::NewFrame();
  glViewport(0, 0, windowSpecs.windowWidth, windowSpecs.windowHeight);
  glClearColor(0.588f, 0.294f, 0.f, 0.f);
  glClear(GL_COLOR_BUFFER_BIT);
  // ImGui::Begin("MyWindow");
  // const ImVec4 textVector = ImVec4(0.588f, 0.294f, 0.f, 0.f);
  // ImGui::TextColored(textVector, "Debug Information");
  // ImGui::BeginChild("Scrolling");
  // ImGui::EndChild();
  this->createTopNavBar();
  // ImGui::End();
  ImGui::Render();
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void Gui::destroy(){
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplSDL2_Shutdown();
  ImGui::DestroyContext();
}
