#include <stdio.h>
#include <iostream>
#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>
#include "utils/windowManager/windowManager.h"
#include "utils/windowManager/windowManager.cpp"

int main (){
  WindowManager::createWindow();
  std::cout << "Hello World!" << std::endl;
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO& inputOutput = ImGui::GetIO(); 
  (void)inputOutput;//This (void) casting construct is a no-op that makes the warning of unused parameters/variables go away.

  return 0;
}