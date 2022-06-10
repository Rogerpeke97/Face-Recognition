cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")

project(FaceRecognition VERSION 0.0.0)

set(sources
    src/main.cpp
)
# FILE(GLOB sources "src/**.cpp" "src/**.h")
# file(GLOB sources RELATIVE "src/" "**.cpp" "**.h")

add_executable(FaceRecognition ${sources})

add_subdirectory(submodules/SDL)

add_subdirectory(submodules/imgui)

target_include_directories(${PROJECT_NAME}
  PUBLIC submodules/SDL/include 
  PUBLIC submodules/imgui
)

target_link_directories(${PROJECT_NAME}
  PUBLIC build/src/SDL
)

# target_compile_options(${PROJECT_NAME} PRIVATE -Wall)
target_link_libraries(imgui SDL2)

target_link_libraries(${PROJECT_NAME}
  SDL2 SDL2main
  imgui
)