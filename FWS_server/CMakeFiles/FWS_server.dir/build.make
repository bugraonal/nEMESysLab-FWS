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

CMakeFiles/FWS_server.dir/src/main.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FWS_server.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/main.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/main.cpp

CMakeFiles/FWS_server.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/main.cpp > CMakeFiles/FWS_server.dir/src/main.cpp.i

CMakeFiles/FWS_server.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/main.cpp -o CMakeFiles/FWS_server.dir/src/main.cpp.s

CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o: src/databaseconnector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/databaseconnector.cpp

CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/databaseconnector.cpp > CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.i

CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/databaseconnector.cpp -o CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.s

CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o: src/filesystemcontroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/filesystemcontroller.cpp

CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/filesystemcontroller.cpp > CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.i

CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/filesystemcontroller.cpp -o CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.s

CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o: src/serverhandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/serverhandler.cpp

CMakeFiles/FWS_server.dir/src/serverhandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/serverhandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/serverhandler.cpp > CMakeFiles/FWS_server.dir/src/serverhandler.cpp.i

CMakeFiles/FWS_server.dir/src/serverhandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/serverhandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/serverhandler.cpp -o CMakeFiles/FWS_server.dir/src/serverhandler.cpp.s

CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o: src/fpga/fpga.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpga.cpp

CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpga.cpp > CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.i

CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpga.cpp -o CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.s

CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o: src/fpga/fpgapool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpgapool.cpp

CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpgapool.cpp > CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.i

CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/fpga/fpgapool.cpp -o CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.s

CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o: src/commands/fpgaResetFilesCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaResetFilesCommand.cpp

CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaResetFilesCommand.cpp > CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.i

CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaResetFilesCommand.cpp -o CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.s

CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o: src/commands/fpgaRebuildProjectCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaRebuildProjectCommand.cpp

CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaRebuildProjectCommand.cpp > CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.i

CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaRebuildProjectCommand.cpp -o CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.s

CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o: src/commands/fpgaSynthesizeDesignCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaSynthesizeDesignCommand.cpp

CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaSynthesizeDesignCommand.cpp > CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.i

CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaSynthesizeDesignCommand.cpp -o CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.s

CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o: src/commands/fpgaImplementDesignCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaImplementDesignCommand.cpp

CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaImplementDesignCommand.cpp > CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.i

CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaImplementDesignCommand.cpp -o CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.s

CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o: CMakeFiles/FWS_server.dir/flags.make
CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o: src/commands/fpgaGenerateProgrammingFileCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o -c /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaGenerateProgrammingFileCommand.cpp

CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaGenerateProgrammingFileCommand.cpp > CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.i

CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/src/commands/fpgaGenerateProgrammingFileCommand.cpp -o CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.s

# Object files for target FWS_server
FWS_server_OBJECTS = \
"CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/FWS_server.dir/src/main.cpp.o" \
"CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o" \
"CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o" \
"CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o" \
"CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o" \
"CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o" \
"CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o" \
"CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o" \
"CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o" \
"CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o" \
"CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o"

# External object files for target FWS_server
FWS_server_EXTERNAL_OBJECTS =

build/FWS_server: CMakeFiles/FWS_server.dir/FWS_server_autogen/mocs_compilation.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/main.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/databaseconnector.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/filesystemcontroller.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/serverhandler.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/fpga/fpga.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/fpga/fpgapool.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/commands/fpgaResetFilesCommand.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/commands/fpgaRebuildProjectCommand.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/commands/fpgaSynthesizeDesignCommand.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/commands/fpgaImplementDesignCommand.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/src/commands/fpgaGenerateProgrammingFileCommand.cpp.o
build/FWS_server: CMakeFiles/FWS_server.dir/build.make
build/FWS_server: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.9.5
build/FWS_server: lib/librpc.a
build/FWS_server: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
build/FWS_server: CMakeFiles/FWS_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable build/FWS_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FWS_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FWS_server.dir/build: build/FWS_server

.PHONY : CMakeFiles/FWS_server.dir/build

CMakeFiles/FWS_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FWS_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FWS_server.dir/clean

CMakeFiles/FWS_server.dir/depend:
	cd /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server /media/SharedFiles/Courses/CS/534/Term/nEMESysLab-FWS/FWS_server/CMakeFiles/FWS_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FWS_server.dir/depend

