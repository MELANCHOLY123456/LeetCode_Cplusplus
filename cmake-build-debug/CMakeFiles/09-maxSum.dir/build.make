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
include CMakeFiles/09-maxSum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/09-maxSum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/09-maxSum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/09-maxSum.dir/flags.make

CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj: CMakeFiles/09-maxSum.dir/flags.make
CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj: D:/07-learning-resources/08-C++_Learning/01-LeetCode_Cplusplus/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp
CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj: CMakeFiles/09-maxSum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj -MF CMakeFiles\09-maxSum.dir\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp.obj.d -o CMakeFiles\09-maxSum.dir\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp.obj -c D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp

CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp > CMakeFiles\09-maxSum.dir\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp.i

CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp -o CMakeFiles\09-maxSum.dir\slidingWindow_doublePointers\definite-length_slidingWindow\09-maxSum.cpp.s

# Object files for target 09-maxSum
09__maxSum_OBJECTS = \
"CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj"

# External object files for target 09-maxSum
09__maxSum_EXTERNAL_OBJECTS =

09-maxSum.exe: CMakeFiles/09-maxSum.dir/slidingWindow_doublePointers/definite-length_slidingWindow/09-maxSum.cpp.obj
09-maxSum.exe: CMakeFiles/09-maxSum.dir/build.make
09-maxSum.exe: CMakeFiles/09-maxSum.dir/linkLibs.rsp
09-maxSum.exe: CMakeFiles/09-maxSum.dir/objects1.rsp
09-maxSum.exe: CMakeFiles/09-maxSum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 09-maxSum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\09-maxSum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/09-maxSum.dir/build: 09-maxSum.exe
.PHONY : CMakeFiles/09-maxSum.dir/build

CMakeFiles/09-maxSum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\09-maxSum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/09-maxSum.dir/clean

CMakeFiles/09-maxSum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles\09-maxSum.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/09-maxSum.dir/depend

