# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\informatika\military

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\informatika\military\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/military.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/military.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/military.dir/flags.make

CMakeFiles/military.dir/main.cpp.obj: CMakeFiles/military.dir/flags.make
CMakeFiles/military.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/military.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\military.dir\main.cpp.obj -c D:\informatika\military\main.cpp

CMakeFiles/military.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/military.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\informatika\military\main.cpp > CMakeFiles\military.dir\main.cpp.i

CMakeFiles/military.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/military.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\informatika\military\main.cpp -o CMakeFiles\military.dir\main.cpp.s

CMakeFiles/military.dir/military.cpp.obj: CMakeFiles/military.dir/flags.make
CMakeFiles/military.dir/military.cpp.obj: ../military.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/military.dir/military.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\military.dir\military.cpp.obj -c D:\informatika\military\military.cpp

CMakeFiles/military.dir/military.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/military.dir/military.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\informatika\military\military.cpp > CMakeFiles\military.dir\military.cpp.i

CMakeFiles/military.dir/military.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/military.dir/military.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\informatika\military\military.cpp -o CMakeFiles\military.dir\military.cpp.s

CMakeFiles/military.dir/planes.cpp.obj: CMakeFiles/military.dir/flags.make
CMakeFiles/military.dir/planes.cpp.obj: ../planes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/military.dir/planes.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\military.dir\planes.cpp.obj -c D:\informatika\military\planes.cpp

CMakeFiles/military.dir/planes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/military.dir/planes.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\informatika\military\planes.cpp > CMakeFiles\military.dir\planes.cpp.i

CMakeFiles/military.dir/planes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/military.dir/planes.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\informatika\military\planes.cpp -o CMakeFiles\military.dir\planes.cpp.s

CMakeFiles/military.dir/tanks.cpp.obj: CMakeFiles/military.dir/flags.make
CMakeFiles/military.dir/tanks.cpp.obj: ../tanks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/military.dir/tanks.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\military.dir\tanks.cpp.obj -c D:\informatika\military\tanks.cpp

CMakeFiles/military.dir/tanks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/military.dir/tanks.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\informatika\military\tanks.cpp > CMakeFiles\military.dir\tanks.cpp.i

CMakeFiles/military.dir/tanks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/military.dir/tanks.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\informatika\military\tanks.cpp -o CMakeFiles\military.dir\tanks.cpp.s

CMakeFiles/military.dir/ships.cpp.obj: CMakeFiles/military.dir/flags.make
CMakeFiles/military.dir/ships.cpp.obj: ../ships.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/military.dir/ships.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\military.dir\ships.cpp.obj -c D:\informatika\military\ships.cpp

CMakeFiles/military.dir/ships.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/military.dir/ships.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\informatika\military\ships.cpp > CMakeFiles\military.dir\ships.cpp.i

CMakeFiles/military.dir/ships.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/military.dir/ships.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\informatika\military\ships.cpp -o CMakeFiles\military.dir\ships.cpp.s

# Object files for target military
military_OBJECTS = \
"CMakeFiles/military.dir/main.cpp.obj" \
"CMakeFiles/military.dir/military.cpp.obj" \
"CMakeFiles/military.dir/planes.cpp.obj" \
"CMakeFiles/military.dir/tanks.cpp.obj" \
"CMakeFiles/military.dir/ships.cpp.obj"

# External object files for target military
military_EXTERNAL_OBJECTS =

military.exe: CMakeFiles/military.dir/main.cpp.obj
military.exe: CMakeFiles/military.dir/military.cpp.obj
military.exe: CMakeFiles/military.dir/planes.cpp.obj
military.exe: CMakeFiles/military.dir/tanks.cpp.obj
military.exe: CMakeFiles/military.dir/ships.cpp.obj
military.exe: CMakeFiles/military.dir/build.make
military.exe: CMakeFiles/military.dir/linklibs.rsp
military.exe: CMakeFiles/military.dir/objects1.rsp
military.exe: CMakeFiles/military.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\informatika\military\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable military.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\military.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/military.dir/build: military.exe

.PHONY : CMakeFiles/military.dir/build

CMakeFiles/military.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\military.dir\cmake_clean.cmake
.PHONY : CMakeFiles/military.dir/clean

CMakeFiles/military.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\informatika\military D:\informatika\military D:\informatika\military\cmake-build-debug D:\informatika\military\cmake-build-debug D:\informatika\military\cmake-build-debug\CMakeFiles\military.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/military.dir/depend
