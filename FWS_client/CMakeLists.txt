cmake_minimum_required(VERSION 3.5)

project(FWS_client LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_executable(FWS_client
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui

  loginwindow.cpp
  loginwindow.h
  loginwindow.ui

#  filesmodel.cpp
#  filesmodel.h

  filescontroller.cpp
  filescontroller.h

  picosha2.h

  )
target_link_libraries(FWS_client PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
