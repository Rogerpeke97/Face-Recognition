cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -Wall -Werror -std=c++17")

project(FaceRecognition VERSION 0.0.0)

# set(THREADS_PREFER_PTHREAD_FLAG ON)

set(sources
src/main.cpp
)
# FILE(GLOB sources "src/**.cpp" "src/**.h")
# file(GLOB sources RELATIVE "src/" "**.cpp" "**.h")

find_package(ImageMagick COMPONENTS Magick++ REQUIRED)

if(NOT ImageMagick_FOUND)
  set(ImageMagickSubmoduleDir "${CMAKE_SOURCE_DIR}/submodules/ImageMagick")
  message(STATUS "ImageMagick not found, installing it...")
  execute_process(
    COMMAND ./configure
    WORKING_DIRECTORY "${ImageMagickSubmoduleDir}"
  )
  execute_process(
    COMMAND make
    WORKING_DIRECTORY "${ImageMagickSubmoduleDir}"
  )
  execute_process(
    COMMAND sudo make install
    WORKING_DIRECTORY "${ImageMagickSubmoduleDir}"
  )
endif()

add_executable(FaceRecognition ${sources})

add_subdirectory(submodules/SDL)

add_subdirectory(submodules/imgui)

target_include_directories(${PROJECT_NAME}
  PUBLIC submodules/SDL/include 
  PUBLIC submodules/imgui
  PUBLIC ${ImageMagick_INCLUDE_DIRS}
)

target_link_directories(${PROJECT_NAME}
  PUBLIC build/src/SDL
)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall)
target_link_libraries(imgui SDL2 GL)

add_definitions( -DMAGICKCORE_QUANTUM_DEPTH=16 )
add_definitions( -DMAGICKCORE_HDRI_ENABLE=0 )

target_link_libraries(${PROJECT_NAME}
  SDL2 SDL2main
  imgui
  ${ImageMagick_LIBRARIES}
  ${CMAKE_DL_LIBS}
)
