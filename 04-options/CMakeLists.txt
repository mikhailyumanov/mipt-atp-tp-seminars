cmake_minimum_required(VERSION 3.20)

project(OptionsExample
  VERSION 0.3
  DESCRIPTION "An example of project with options"
  LANGUAGES CXX
  )

option(USE_PRINT "Use out print" ON)
if (USE_PRINT)
  add_definitions(-DUSE_PRINT)
endif(USE_PRINT)

set(HEADERS_DIR "${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/include")
set(SRC_DIR "${${CMAKE_PROJECT_NAME}_SOURCE_DIR}/src")

message("Debug message!")
message("Project name is ${CMAKE_PROJECT_NAME}")
message("Source dir is ${${CMAKE_PROJECT_NAME}_SOURCE_DIR}")

add_executable(exec main.cpp)

add_subdirectory(src)

target_link_libraries(exec PUBLIC print)
