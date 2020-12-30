cmake_minimum_required(VERSION 3.5)

project(FWS_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Sql REQUIRED PATHS "${CMAKE_PREFIX_PATH}/lib/cmake/Qt5" NO_DEFAULT_PATH)

add_executable(FWS_server src/main.cpp)

target_link_libraries(FWS_server Qt5::Core Qt5::Sql)
