# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DynamicMemoryAllocation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DynamicMemoryAllocation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DynamicMemoryAllocation.dir/flags.make

CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.obj: CMakeFiles/DynamicMemoryAllocation.dir/flags.make
CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DynamicMemoryAllocation.dir\main.cpp.obj -c C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\main.cpp

CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\main.cpp > CMakeFiles\DynamicMemoryAllocation.dir\main.cpp.i

CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\main.cpp -o CMakeFiles\DynamicMemoryAllocation.dir\main.cpp.s

# Object files for target DynamicMemoryAllocation
DynamicMemoryAllocation_OBJECTS = \
"CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.obj"

# External object files for target DynamicMemoryAllocation
DynamicMemoryAllocation_EXTERNAL_OBJECTS =

DynamicMemoryAllocation.exe: CMakeFiles/DynamicMemoryAllocation.dir/main.cpp.obj
DynamicMemoryAllocation.exe: CMakeFiles/DynamicMemoryAllocation.dir/build.make
DynamicMemoryAllocation.exe: CMakeFiles/DynamicMemoryAllocation.dir/linklibs.rsp
DynamicMemoryAllocation.exe: CMakeFiles/DynamicMemoryAllocation.dir/objects1.rsp
DynamicMemoryAllocation.exe: CMakeFiles/DynamicMemoryAllocation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DynamicMemoryAllocation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DynamicMemoryAllocation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DynamicMemoryAllocation.dir/build: DynamicMemoryAllocation.exe

.PHONY : CMakeFiles/DynamicMemoryAllocation.dir/build

CMakeFiles/DynamicMemoryAllocation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DynamicMemoryAllocation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DynamicMemoryAllocation.dir/clean

CMakeFiles/DynamicMemoryAllocation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug C:\Users\sousa\Desktop\github\C++\DynamicMemoryAllocation\cmake-build-debug\CMakeFiles\DynamicMemoryAllocation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DynamicMemoryAllocation.dir/depend
