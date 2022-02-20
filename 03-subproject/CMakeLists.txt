cmake_minimum_required(VERSION 3.20)

project(SubprojectExample
  VERSION 0.2
  DESCRIPTION "An example of project with subproject and shared library"
  LANGUAGES CXX
  )

set(HEADERS_DIR "${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/include")
set(SRC_DIR "${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/src")

message("Debug message!")
message("Project name is ${CMAKE_PROJECT_NAME}")
message("Source dir is ${${CMAKE_PROJECT_NAME}_SOURCE_DIR}")

add_executable(exec main.cpp)

add_subdirectory(src)

target_link_libraries(exec PUBLIC print)
