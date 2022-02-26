cmake_minimum_required(VERSION 3.20)

project(Builder)

set(HEADERS_DIR "${PROJECT_SOURCE_DIR}/include")
set(SOURCES_DIR "${PROJECT_SOURCE_DIR}/src")

file(GLOB_RECURSE SOURCES
     ${SOURCES_DIR}/*)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES} main.cpp)
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${HEADERS_DIR})
