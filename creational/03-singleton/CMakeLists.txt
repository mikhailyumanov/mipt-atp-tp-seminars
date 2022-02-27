cmake_minimum_required(VERSION 3.16)

project(Singleton)

set(STRUCT_DIR "${PROJECT_SOURCE_DIR}/struct")
set(HEADERS_DIR "${STRUCT_DIR}/include")
set(SOURCES_DIR "${STRUCT_DIR}/src")

file(GLOB_RECURSE SOURCES ${SOURCES_DIR}/*)
file(GLOB HEADERS ${HEADERS_DIR}/*)

add_executable(singleton ${SOURCES} main.cpp)

target_include_directories(singleton PUBLIC ${HEADERS})
