# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server

# Include any dependencies generated for this target.
include CMakeFiles/FWS_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FWS_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FWS_server.dir/flags.make

CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o: FWS_server_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/FWS_server_autogen/mocs_compilation.cpp

CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/FWS_server_autogen/mocs_compilation.cpp > CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.i

CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/FWS_server_autogen/mocs_compilation.cpp -o CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.s

CMakeFiles/FWS_server.dir/main.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FWS_server.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/main.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/main.cpp

CMakeFiles/FWS_server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/main.cpp > CMakeFiles/FWS_server.dir/main.cpp.i

CMakeFiles/FWS_server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/main.cpp -o CMakeFiles/FWS_server.dir/main.cpp.s

# Object files for target FWS_server
FWS_server_OBJECTS = \
"CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/FWS_server.dir/main.cpp.o"

# External object files for target FWS_server
FWS_server_EXTERNAL_OBJECTS =

FWS_server: CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o
FWS_server: CMakeFiles/FWS_server.dir/main.cpp.o
FWS_server: CMakeFiles/FWS_server.dir/build.make
FWS_server: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.9.5
FWS_server: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
FWS_server: CMakeFiles/FWS_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FWS_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FWS_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FWS_server.dir/build: FWS_server

.PHONY : CMakeFiles/FWS_server.dir/build

CMakeFiles/FWS_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FWS_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FWS_server.dir/clean

CMakeFiles/FWS_server.dir/depend:
	cd /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles/FWS_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FWS_server.dir/depend
