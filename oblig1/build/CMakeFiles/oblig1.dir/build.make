# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.23.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.23.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build"

# Include any dependencies generated for this target.
include CMakeFiles/oblig1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/oblig1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/oblig1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oblig1.dir/flags.make

CMakeFiles/oblig1.dir/main_b.cpp.o: CMakeFiles/oblig1.dir/flags.make
CMakeFiles/oblig1.dir/main_b.cpp.o: ../main_b.cpp
CMakeFiles/oblig1.dir/main_b.cpp.o: CMakeFiles/oblig1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oblig1.dir/main_b.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/oblig1.dir/main_b.cpp.o -MF CMakeFiles/oblig1.dir/main_b.cpp.o.d -o CMakeFiles/oblig1.dir/main_b.cpp.o -c "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/main_b.cpp"

CMakeFiles/oblig1.dir/main_b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oblig1.dir/main_b.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/main_b.cpp" > CMakeFiles/oblig1.dir/main_b.cpp.i

CMakeFiles/oblig1.dir/main_b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oblig1.dir/main_b.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/main_b.cpp" -o CMakeFiles/oblig1.dir/main_b.cpp.s

# Object files for target oblig1
oblig1_OBJECTS = \
"CMakeFiles/oblig1.dir/main_b.cpp.o"

# External object files for target oblig1
oblig1_EXTERNAL_OBJECTS =

oblig1: CMakeFiles/oblig1.dir/main_b.cpp.o
oblig1: CMakeFiles/oblig1.dir/build.make
oblig1: CMakeFiles/oblig1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable oblig1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oblig1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oblig1.dir/build: oblig1
.PHONY : CMakeFiles/oblig1.dir/build

CMakeFiles/oblig1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oblig1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oblig1.dir/clean

CMakeFiles/oblig1.dir/depend:
	cd "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1" "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1" "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build" "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build" "/Users/marcusjohannessen/Desktop/NTNU/Høst 2022/C++/Obliger/oblig1/build/CMakeFiles/oblig1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/oblig1.dir/depend

