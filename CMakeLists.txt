cmake_minimum_required(VERSION 3.16)

project(Logger
  VERSION 0.0.1
  DESCRIPTION "A simple console logger"
  LANGUAGES CXX
)

find_package(ConsoleUtils REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
