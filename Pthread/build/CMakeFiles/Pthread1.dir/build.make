# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /media/sf_share/CPP/PThread

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_share/CPP/PThread/build

# Include any dependencies generated for this target.
include CMakeFiles/Pthread1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pthread1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pthread1.dir/flags.make

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o: CMakeFiles/Pthread1.dir/flags.make
CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o: ../src/Pthread1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_share/CPP/PThread/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o -c /media/sf_share/CPP/PThread/src/Pthread1.cpp

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pthread1.dir/src/Pthread1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_share/CPP/PThread/src/Pthread1.cpp > CMakeFiles/Pthread1.dir/src/Pthread1.cpp.i

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pthread1.dir/src/Pthread1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_share/CPP/PThread/src/Pthread1.cpp -o CMakeFiles/Pthread1.dir/src/Pthread1.cpp.s

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.requires:

.PHONY : CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.requires

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.provides: CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.requires
	$(MAKE) -f CMakeFiles/Pthread1.dir/build.make CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.provides.build
.PHONY : CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.provides

CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.provides.build: CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o


# Object files for target Pthread1
Pthread1_OBJECTS = \
"CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o"

# External object files for target Pthread1
Pthread1_EXTERNAL_OBJECTS =

Pthread1: CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o
Pthread1: CMakeFiles/Pthread1.dir/build.make
Pthread1: CMakeFiles/Pthread1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_share/CPP/PThread/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pthread1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pthread1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pthread1.dir/build: Pthread1

.PHONY : CMakeFiles/Pthread1.dir/build

CMakeFiles/Pthread1.dir/requires: CMakeFiles/Pthread1.dir/src/Pthread1.cpp.o.requires

.PHONY : CMakeFiles/Pthread1.dir/requires

CMakeFiles/Pthread1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pthread1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pthread1.dir/clean

CMakeFiles/Pthread1.dir/depend:
	cd /media/sf_share/CPP/PThread/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_share/CPP/PThread /media/sf_share/CPP/PThread /media/sf_share/CPP/PThread/build /media/sf_share/CPP/PThread/build /media/sf_share/CPP/PThread/build/CMakeFiles/Pthread1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pthread1.dir/depend

