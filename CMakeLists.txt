cmake_minimum_required(VERSION 3.14)

project(VPP_1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(VPP_1
  main.cpp
)
target_sources(VPP_1 PRIVATE komponente.cpp komponente.h bohrung.h bohrung.cpp fraesung.h fraesung.cpp komponentenlist.h komponentenlist.cpp)
target_link_libraries(VPP_1 Qt${QT_VERSION_MAJOR}::Core)
