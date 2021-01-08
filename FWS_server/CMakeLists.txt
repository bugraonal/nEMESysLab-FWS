cmake_minimum_required(VERSION 3.5)

project(FWS_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./build)#../build-FWS_server-Desktop-Debug)
#set(CMAKE_PREFIX_PATH /media/SharedFiles/ProgramFiles/Qt/5.15.0/gcc_64)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Libraries
find_package(Qt5 COMPONENTS Core Sql REQUIRED PATHS "${CMAKE_PREFIX_PATH}/lib/cmake/Qt5" NO_DEFAULT_PATH)
include_directories(${CMAKE_PREFIX_PATH}/lib/cmake/Qt5Sql)

FIND_PACKAGE( Boost 1.65 COMPONENTS program_options REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

#message("CMAKE PATH IS ${CMAKE_PREFIX_PATH}")

# Source File Directory
include_directories(./src)
include_directories(./src/fpga)
include_directories(./src/commands)
include_directories(./include)

# Linker Flags
set(CMAKE_SHARED_LINKER_FLAGS "-lboost_system")

add_executable(FWS_server 

  # Main
  src/main.cpp

  #Database
  src/databaseconnector.hpp
  src/databaseconnector.cpp

  #File System
  src/filesystemcontroller.hpp
  src/filesystemcontroller.cpp

  #FPGA
#  src/fpga/fpgaabstract.hpp
#  src/fpga/fpgaempty.hpp
#  src/fpga/fpgaempty.cpp
  src/fpga/fpga.hpp
  src/fpga/fpga.cpp
  src/fpga/fpgapool.hpp
  src/fpga/fpgapool.cpp
  
  #Commands
  src/commands/command.hpp
  src/commands/fpgaResetFilesCommand.hpp
  src/commands/fpgaResetFilesCommand.cpp
  src/commands/fpgaRebuildProjectCommand.hpp
  src/commands/fpgaRebuildProjectCommand.cpp
  src/commands/fpgaSynthesizeDesignCommand.hpp
  src/commands/fpgaSynthesizeDesignCommand.cpp
  src/commands/fpgaImplementDesignCommand.hpp
  src/commands/fpgaImplementDesignCommand.cpp
  src/commands/fpgaGenerateProgrammingFileCommand.hpp
  src/commands/fpgaGenerateProgrammingFileCommand.cpp
  )

target_link_libraries(FWS_server Qt5::Core Qt5::Sql boost_filesystem boost_system ${PROJECT_SOURCE_DIR}/lib/librpc.a "${CMAKE_THREAD_LIBS_INIT}")
target_include_directories(FWS_server PRIVATE ./src ./include)
