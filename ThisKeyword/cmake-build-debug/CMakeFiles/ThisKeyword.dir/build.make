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
CMAKE_SOURCE_DIR = C:\Users\sousa\Desktop\github\C++\ThisKeyword

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ThisKeyword.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ThisKeyword.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ThisKeyword.dir/flags.make

CMakeFiles/ThisKeyword.dir/main.cpp.obj: CMakeFiles/ThisKeyword.dir/flags.make
CMakeFiles/ThisKeyword.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ThisKeyword.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ThisKeyword.dir\main.cpp.obj -c C:\Users\sousa\Desktop\github\C++\ThisKeyword\main.cpp

CMakeFiles/ThisKeyword.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThisKeyword.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sousa\Desktop\github\C++\ThisKeyword\main.cpp > CMakeFiles\ThisKeyword.dir\main.cpp.i

CMakeFiles/ThisKeyword.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThisKeyword.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sousa\Desktop\github\C++\ThisKeyword\main.cpp -o CMakeFiles\ThisKeyword.dir\main.cpp.s

CMakeFiles/ThisKeyword.dir/Person.cpp.obj: CMakeFiles/ThisKeyword.dir/flags.make
CMakeFiles/ThisKeyword.dir/Person.cpp.obj: ../Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ThisKeyword.dir/Person.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ThisKeyword.dir\Person.cpp.obj -c C:\Users\sousa\Desktop\github\C++\ThisKeyword\Person.cpp

CMakeFiles/ThisKeyword.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThisKeyword.dir/Person.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sousa\Desktop\github\C++\ThisKeyword\Person.cpp > CMakeFiles\ThisKeyword.dir\Person.cpp.i

CMakeFiles/ThisKeyword.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThisKeyword.dir/Person.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sousa\Desktop\github\C++\ThisKeyword\Person.cpp -o CMakeFiles\ThisKeyword.dir\Person.cpp.s

# Object files for target ThisKeyword
ThisKeyword_OBJECTS = \
"CMakeFiles/ThisKeyword.dir/main.cpp.obj" \
"CMakeFiles/ThisKeyword.dir/Person.cpp.obj"

# External object files for target ThisKeyword
ThisKeyword_EXTERNAL_OBJECTS =

ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/main.cpp.obj
ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/Person.cpp.obj
ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/build.make
ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/linklibs.rsp
ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/objects1.rsp
ThisKeyword.exe: CMakeFiles/ThisKeyword.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ThisKeyword.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ThisKeyword.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ThisKeyword.dir/build: ThisKeyword.exe

.PHONY : CMakeFiles/ThisKeyword.dir/build

CMakeFiles/ThisKeyword.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ThisKeyword.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ThisKeyword.dir/clean

CMakeFiles/ThisKeyword.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sousa\Desktop\github\C++\ThisKeyword C:\Users\sousa\Desktop\github\C++\ThisKeyword C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug C:\Users\sousa\Desktop\github\C++\ThisKeyword\cmake-build-debug\CMakeFiles\ThisKeyword.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ThisKeyword.dir/depend

