# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ignacio/Desktop/face-recognition

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ignacio/Desktop/face-recognition/build

# Include any dependencies generated for this target.
include CMakeFiles/FaceRecognition.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FaceRecognition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FaceRecognition.dir/flags.make

CMakeFiles/FaceRecognition.dir/src/main.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FaceRecognition.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/main.cpp.o -c /home/ignacio/Desktop/face-recognition/src/main.cpp

CMakeFiles/FaceRecognition.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/main.cpp > CMakeFiles/FaceRecognition.dir/src/main.cpp.i

CMakeFiles/FaceRecognition.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/main.cpp -o CMakeFiles/FaceRecognition.dir/src/main.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o: ../src/imgui/imgui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o: ../src/imgui/imgui_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_demo.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_demo.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_demo.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o: ../src/imgui/imgui_draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_draw.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_draw.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_draw.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o: ../src/imgui/imgui_widgets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_widgets.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_widgets.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_widgets.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o: ../src/imgui/imgui_impl_opengl3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_opengl3.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_opengl3.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_opengl3.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o: ../src/imgui/imgui_impl_sdl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_sdl.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_sdl.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_impl_sdl.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.s

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o: CMakeFiles/FaceRecognition.dir/flags.make
CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o: ../src/imgui/imgui_tables.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o -c /home/ignacio/Desktop/face-recognition/src/imgui/imgui_tables.cpp

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ignacio/Desktop/face-recognition/src/imgui/imgui_tables.cpp > CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.i

CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ignacio/Desktop/face-recognition/src/imgui/imgui_tables.cpp -o CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.s

# Object files for target FaceRecognition
FaceRecognition_OBJECTS = \
"CMakeFiles/FaceRecognition.dir/src/main.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o" \
"CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o"

# External object files for target FaceRecognition
FaceRecognition_EXTERNAL_OBJECTS =

FaceRecognition: CMakeFiles/FaceRecognition.dir/src/main.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_demo.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_draw.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_widgets.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_opengl3.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_impl_sdl.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/src/imgui/imgui_tables.cpp.o
FaceRecognition: CMakeFiles/FaceRecognition.dir/build.make
FaceRecognition: src/SDL/libSDL2-2.0d.so.0.2300.0
FaceRecognition: src/SDL/libSDL2maind.a
FaceRecognition: src/SDL/libSDL2d.a
FaceRecognition: CMakeFiles/FaceRecognition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ignacio/Desktop/face-recognition/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable FaceRecognition"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FaceRecognition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FaceRecognition.dir/build: FaceRecognition

.PHONY : CMakeFiles/FaceRecognition.dir/build

CMakeFiles/FaceRecognition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FaceRecognition.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FaceRecognition.dir/clean

CMakeFiles/FaceRecognition.dir/depend:
	cd /home/ignacio/Desktop/face-recognition/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ignacio/Desktop/face-recognition /home/ignacio/Desktop/face-recognition /home/ignacio/Desktop/face-recognition/build /home/ignacio/Desktop/face-recognition/build /home/ignacio/Desktop/face-recognition/build/CMakeFiles/FaceRecognition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FaceRecognition.dir/depend

