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
CMAKE_SOURCE_DIR = /media/sf_share/CPP/SharedPtr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_share/CPP/SharedPtr

# Include any dependencies generated for this target.
include CMakeFiles/SharedPtr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SharedPtr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SharedPtr.dir/flags.make

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o: CMakeFiles/SharedPtr.dir/flags.make
CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o: src/SharedPtr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_share/CPP/SharedPtr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o -c /media/sf_share/CPP/SharedPtr/src/SharedPtr.cpp

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_share/CPP/SharedPtr/src/SharedPtr.cpp > CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.i

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_share/CPP/SharedPtr/src/SharedPtr.cpp -o CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.s

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.requires:

.PHONY : CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.requires

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.provides: CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.requires
	$(MAKE) -f CMakeFiles/SharedPtr.dir/build.make CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.provides.build
.PHONY : CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.provides

CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.provides.build: CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o


# Object files for target SharedPtr
SharedPtr_OBJECTS = \
"CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o"

# External object files for target SharedPtr
SharedPtr_EXTERNAL_OBJECTS =

SharedPtr: CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o
SharedPtr: CMakeFiles/SharedPtr.dir/build.make
SharedPtr: CMakeFiles/SharedPtr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_share/CPP/SharedPtr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SharedPtr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SharedPtr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SharedPtr.dir/build: SharedPtr

.PHONY : CMakeFiles/SharedPtr.dir/build

CMakeFiles/SharedPtr.dir/requires: CMakeFiles/SharedPtr.dir/src/SharedPtr.cpp.o.requires

.PHONY : CMakeFiles/SharedPtr.dir/requires

CMakeFiles/SharedPtr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SharedPtr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SharedPtr.dir/clean

CMakeFiles/SharedPtr.dir/depend:
	cd /media/sf_share/CPP/SharedPtr && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_share/CPP/SharedPtr /media/sf_share/CPP/SharedPtr /media/sf_share/CPP/SharedPtr /media/sf_share/CPP/SharedPtr /media/sf_share/CPP/SharedPtr/CMakeFiles/SharedPtr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SharedPtr.dir/depend

