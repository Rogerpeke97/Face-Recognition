cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")


project(FaceRecognition VERSION 0.0.0)

set(sources
    src/main.cpp
    src/imgui/imconfig.h
    src/imgui/imgui.cpp
    src/imgui/imgui.h
    src/imgui/imgui_demo.cpp
    src/imgui/imgui_draw.cpp
    src/imgui/imgui_internal.h
    src/imgui/imgui_widgets.cpp
    src/imgui/imstb_rectpack.h
    src/imgui/imstb_textedit.h
    src/imgui/imstb_truetype.h
    src/imgui/imgui_impl_opengl3.cpp
    src/imgui/imgui_impl_opengl3.h
    src/imgui/imgui_impl_sdl.cpp
    src/imgui/imgui_impl_sdl.h
    src/imgui/imgui_tables.cpp
)

add_executable(FaceRecognition ${sources})

add_subdirectory(src/SDL)

target_include_directories(${PROJECT_NAME} PUBLIC src/SDL/include)

target_link_directories(${PROJECT_NAME}
  PRIVATE build/src/SDL
)

# target_compile_options(${PROJECT_NAME} PRIVATE -Wall)

target_link_libraries(${PROJECT_NAME}
  SDL2 SDL2main SDL2-static
)