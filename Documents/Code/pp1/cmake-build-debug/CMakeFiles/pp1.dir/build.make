# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Nitro5\Documents\Code\pp1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pp1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/pp1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pp1.dir/flags.make

CMakeFiles/pp1.dir/pract0741/a.cpp.obj: CMakeFiles/pp1.dir/flags.make
CMakeFiles/pp1.dir/pract0741/a.cpp.obj: ../pract0741/a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pp1.dir/pract0741/a.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pp1.dir\pract0741\a.cpp.obj -c C:\Users\Nitro5\Documents\Code\pp1\pract0741\a.cpp

CMakeFiles/pp1.dir/pract0741/a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pp1.dir/pract0741/a.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nitro5\Documents\Code\pp1\pract0741\a.cpp > CMakeFiles\pp1.dir\pract0741\a.cpp.i

CMakeFiles/pp1.dir/pract0741/a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pp1.dir/pract0741/a.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nitro5\Documents\Code\pp1\pract0741\a.cpp -o CMakeFiles\pp1.dir\pract0741\a.cpp.s

# Object files for target pp1
pp1_OBJECTS = \
"CMakeFiles/pp1.dir/pract0741/a.cpp.obj"

# External object files for target pp1
pp1_EXTERNAL_OBJECTS =

pp1.exe: CMakeFiles/pp1.dir/pract0741/a.cpp.obj
pp1.exe: CMakeFiles/pp1.dir/build.make
pp1.exe: CMakeFiles/pp1.dir/linklibs.rsp
pp1.exe: CMakeFiles/pp1.dir/objects1.rsp
pp1.exe: CMakeFiles/pp1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pp1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pp1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pp1.dir/build: pp1.exe
.PHONY : CMakeFiles/pp1.dir/build

CMakeFiles/pp1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pp1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pp1.dir/clean

CMakeFiles/pp1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nitro5\Documents\Code\pp1 C:\Users\Nitro5\Documents\Code\pp1 C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug C:\Users\Nitro5\Documents\Code\pp1\cmake-build-debug\CMakeFiles\pp1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pp1.dir/depend

