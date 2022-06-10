set(sources 
  imconfig.h
  imgui.cpp
  imgui.h
  imgui_demo.cpp
  imgui_draw.cpp
  imgui_internal.h
  imgui_widgets.cpp
  imstb_rectpack.h
  imstb_textedit.h
  imstb_truetype.h
  imgui_impl_opengl3.cpp
  imgui_impl_opengl3.h
  imgui_impl_sdl.cpp
  imgui_impl_sdl.h
  imgui_tables.cpp
)

add_library(imgui ${sources})
