# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01-calPoints.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/01-calPoints.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/01-calPoints.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01-calPoints.dir/flags.make

CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj: CMakeFiles/01-calPoints.dir/flags.make
CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj: D:/07-learning-resources/08-C++_Learning/01-LeetCode_Cplusplus/basic_of_programming/imitate/01-calPoints.cpp
CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj: CMakeFiles/01-calPoints.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj -MF CMakeFiles\01-calPoints.dir\basic_of_programming\imitate\01-calPoints.cpp.obj.d -o CMakeFiles\01-calPoints.dir\basic_of_programming\imitate\01-calPoints.cpp.obj -c D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\basic_of_programming\imitate\01-calPoints.cpp

CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\basic_of_programming\imitate\01-calPoints.cpp > CMakeFiles\01-calPoints.dir\basic_of_programming\imitate\01-calPoints.cpp.i

CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\basic_of_programming\imitate\01-calPoints.cpp -o CMakeFiles\01-calPoints.dir\basic_of_programming\imitate\01-calPoints.cpp.s

# Object files for target 01-calPoints
01__calPoints_OBJECTS = \
"CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj"

# External object files for target 01-calPoints
01__calPoints_EXTERNAL_OBJECTS =

01-calPoints.exe: CMakeFiles/01-calPoints.dir/basic_of_programming/imitate/01-calPoints.cpp.obj
01-calPoints.exe: CMakeFiles/01-calPoints.dir/build.make
01-calPoints.exe: CMakeFiles/01-calPoints.dir/linkLibs.rsp
01-calPoints.exe: CMakeFiles/01-calPoints.dir/objects1.rsp
01-calPoints.exe: CMakeFiles/01-calPoints.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01-calPoints.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\01-calPoints.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01-calPoints.dir/build: 01-calPoints.exe
.PHONY : CMakeFiles/01-calPoints.dir/build

CMakeFiles/01-calPoints.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\01-calPoints.dir\cmake_clean.cmake
.PHONY : CMakeFiles/01-calPoints.dir/clean

CMakeFiles/01-calPoints.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles\01-calPoints.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/01-calPoints.dir/depend

