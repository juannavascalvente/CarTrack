# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juannc/Projects/Gps/CarTrack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juannc/Projects/Gps/CarTrack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CarTrack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CarTrack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CarTrack.dir/flags.make

CMakeFiles/CarTrack.dir/src/main.cpp.o: CMakeFiles/CarTrack.dir/flags.make
CMakeFiles/CarTrack.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juannc/Projects/Gps/CarTrack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CarTrack.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CarTrack.dir/src/main.cpp.o -c /home/juannc/Projects/Gps/CarTrack/src/main.cpp

CMakeFiles/CarTrack.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarTrack.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juannc/Projects/Gps/CarTrack/src/main.cpp > CMakeFiles/CarTrack.dir/src/main.cpp.i

CMakeFiles/CarTrack.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarTrack.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juannc/Projects/Gps/CarTrack/src/main.cpp -o CMakeFiles/CarTrack.dir/src/main.cpp.s

# Object files for target CarTrack
CarTrack_OBJECTS = \
"CMakeFiles/CarTrack.dir/src/main.cpp.o"

# External object files for target CarTrack
CarTrack_EXTERNAL_OBJECTS =

CarTrack: CMakeFiles/CarTrack.dir/src/main.cpp.o
CarTrack: CMakeFiles/CarTrack.dir/build.make
CarTrack: CMakeFiles/CarTrack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juannc/Projects/Gps/CarTrack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CarTrack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CarTrack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CarTrack.dir/build: CarTrack

.PHONY : CMakeFiles/CarTrack.dir/build

CMakeFiles/CarTrack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CarTrack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CarTrack.dir/clean

CMakeFiles/CarTrack.dir/depend:
	cd /home/juannc/Projects/Gps/CarTrack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juannc/Projects/Gps/CarTrack /home/juannc/Projects/Gps/CarTrack /home/juannc/Projects/Gps/CarTrack/cmake-build-debug /home/juannc/Projects/Gps/CarTrack/cmake-build-debug /home/juannc/Projects/Gps/CarTrack/cmake-build-debug/CMakeFiles/CarTrack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CarTrack.dir/depend

