# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Aaron/CLionProjects/MusicTheory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MusicTheory.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MusicTheory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MusicTheory.dir/flags.make

CMakeFiles/MusicTheory.dir/main.cpp.o: CMakeFiles/MusicTheory.dir/flags.make
CMakeFiles/MusicTheory.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MusicTheory.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MusicTheory.dir/main.cpp.o -c /Users/Aaron/CLionProjects/MusicTheory/main.cpp

CMakeFiles/MusicTheory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MusicTheory.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Aaron/CLionProjects/MusicTheory/main.cpp > CMakeFiles/MusicTheory.dir/main.cpp.i

CMakeFiles/MusicTheory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MusicTheory.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Aaron/CLionProjects/MusicTheory/main.cpp -o CMakeFiles/MusicTheory.dir/main.cpp.s

CMakeFiles/MusicTheory.dir/test/test_main.cpp.o: CMakeFiles/MusicTheory.dir/flags.make
CMakeFiles/MusicTheory.dir/test/test_main.cpp.o: ../test/test_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MusicTheory.dir/test/test_main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MusicTheory.dir/test/test_main.cpp.o -c /Users/Aaron/CLionProjects/MusicTheory/test/test_main.cpp

CMakeFiles/MusicTheory.dir/test/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MusicTheory.dir/test/test_main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Aaron/CLionProjects/MusicTheory/test/test_main.cpp > CMakeFiles/MusicTheory.dir/test/test_main.cpp.i

CMakeFiles/MusicTheory.dir/test/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MusicTheory.dir/test/test_main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Aaron/CLionProjects/MusicTheory/test/test_main.cpp -o CMakeFiles/MusicTheory.dir/test/test_main.cpp.s

CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o: CMakeFiles/MusicTheory.dir/flags.make
CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o: ../src/naturalNote.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o -c /Users/Aaron/CLionProjects/MusicTheory/src/naturalNote.cpp

CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Aaron/CLionProjects/MusicTheory/src/naturalNote.cpp > CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.i

CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Aaron/CLionProjects/MusicTheory/src/naturalNote.cpp -o CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.s

# Object files for target MusicTheory
MusicTheory_OBJECTS = \
"CMakeFiles/MusicTheory.dir/main.cpp.o" \
"CMakeFiles/MusicTheory.dir/test/test_main.cpp.o" \
"CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o"

# External object files for target MusicTheory
MusicTheory_EXTERNAL_OBJECTS =

MusicTheory: CMakeFiles/MusicTheory.dir/main.cpp.o
MusicTheory: CMakeFiles/MusicTheory.dir/test/test_main.cpp.o
MusicTheory: CMakeFiles/MusicTheory.dir/src/naturalNote.cpp.o
MusicTheory: CMakeFiles/MusicTheory.dir/build.make
MusicTheory: CMakeFiles/MusicTheory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable MusicTheory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MusicTheory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MusicTheory.dir/build: MusicTheory

.PHONY : CMakeFiles/MusicTheory.dir/build

CMakeFiles/MusicTheory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MusicTheory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MusicTheory.dir/clean

CMakeFiles/MusicTheory.dir/depend:
	cd /Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Aaron/CLionProjects/MusicTheory /Users/Aaron/CLionProjects/MusicTheory /Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug /Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug /Users/Aaron/CLionProjects/MusicTheory/cmake-build-debug/CMakeFiles/MusicTheory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MusicTheory.dir/depend

