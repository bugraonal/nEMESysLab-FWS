cmake_minimum_required(VERSION 3.5)

project(FWS_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./build)
set(CMAKE_PREFIX_PATH /media/SharedFiles/ProgramFiles/Qt/5.15.0/gcc_64)


find_package(Qt5 COMPONENTS Core Sql REQUIRED PATHS "${CMAKE_PREFIX_PATH}/lib/cmake/Qt5" NO_DEFAULT_PATH)

include_directories(./src)

add_executable(FWS_server 

  # Main
  src/main.cpp

  #Database
  src/databaseconnector.h
  src/databaseconnector.cpp
  )

target_include_directories(FWS_server PRIVATE ./src)
target_link_libraries(FWS_server Qt5::Core Qt5::Sql)
