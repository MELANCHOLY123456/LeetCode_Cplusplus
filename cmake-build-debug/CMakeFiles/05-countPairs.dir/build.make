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
include CMakeFiles/05-countPairs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/05-countPairs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/05-countPairs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/05-countPairs.dir/flags.make

CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj: CMakeFiles/05-countPairs.dir/flags.make
CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj: D:/07-learning-resources/08-C++_Learning/01-LeetCode_Cplusplus/graph_theoretic_algorithm/05-countPairs.cpp
CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj: CMakeFiles/05-countPairs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj -MF CMakeFiles\05-countPairs.dir\graph_theoretic_algorithm\05-countPairs.cpp.obj.d -o CMakeFiles\05-countPairs.dir\graph_theoretic_algorithm\05-countPairs.cpp.obj -c D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\graph_theoretic_algorithm\05-countPairs.cpp

CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\graph_theoretic_algorithm\05-countPairs.cpp > CMakeFiles\05-countPairs.dir\graph_theoretic_algorithm\05-countPairs.cpp.i

CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\graph_theoretic_algorithm\05-countPairs.cpp -o CMakeFiles\05-countPairs.dir\graph_theoretic_algorithm\05-countPairs.cpp.s

# Object files for target 05-countPairs
05__countPairs_OBJECTS = \
"CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj"

# External object files for target 05-countPairs
05__countPairs_EXTERNAL_OBJECTS =

05-countPairs.exe: CMakeFiles/05-countPairs.dir/graph_theoretic_algorithm/05-countPairs.cpp.obj
05-countPairs.exe: CMakeFiles/05-countPairs.dir/build.make
05-countPairs.exe: CMakeFiles/05-countPairs.dir/linkLibs.rsp
05-countPairs.exe: CMakeFiles/05-countPairs.dir/objects1.rsp
05-countPairs.exe: CMakeFiles/05-countPairs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 05-countPairs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\05-countPairs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/05-countPairs.dir/build: 05-countPairs.exe
.PHONY : CMakeFiles/05-countPairs.dir/build

CMakeFiles/05-countPairs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\05-countPairs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/05-countPairs.dir/clean

CMakeFiles/05-countPairs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug D:\07-learning-resources\08-C++_Learning\01-LeetCode_Cplusplus\cmake-build-debug\CMakeFiles\05-countPairs.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/05-countPairs.dir/depend

