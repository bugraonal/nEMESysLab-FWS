cmake_minimum_required(VERSION 3.5)

project(FWS_client LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(Threads REQUIRED)

add_executable(FWS_client
  src/main.cpp
  src/mainwindow.cpp
  src/mainwindow.h
  src/mainwindow.ui

  src/loginwindow.cpp
  src/loginwindow.h
  src/loginwindow.ui

  src/filesmodel.cpp
  src/filesmodel.h

  src/filescontroller.cpp
  src/filescontroller.h

  src/filelist.cpp
  src/filelist.h

  src/appointmentsview.cpp
  src/appointmentsview.h
  src/appointmentsview.ui

  src/appointmentsmodel.cpp
  src/appointmentsmodel.h

  src/serverconnection.cpp
  src/serverconnection.h

  src/dtointerface.h
  src/appointmentlistdto.h
  src/appointmentdto.h
  src/credentialsdto.h
  src/fileslistdto.h

  src/picosha2.h

  )
target_link_libraries(FWS_client PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${PROJECT_SOURCE_DIR}/lib/librpc.a Threads::Threads)

target_include_directories(FWS_client PUBLIC src include)
