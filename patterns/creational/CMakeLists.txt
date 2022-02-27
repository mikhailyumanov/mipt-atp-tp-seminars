cmake_minimum_required(VERSION 3.20)

project(CreationalPatterns)

set(STRUCT_DIR "${PROJECT_SOURCE_DIR}/struct")
set(HEADERS_DIR "${STRUCT_DIR}/include")
set(SOURCES_DIR "${STRUCT_DIR}/src")

file(GLOB_RECURSE SOURCES_UTILS ${SOURCES_DIR}/utils/*)
file(GLOB_RECURSE SOURCES_BUILDER ${SOURCES_DIR}/builder/*)
file(GLOB_RECURSE SOURCES_ABSTRACT_FACTORY ${SOURCES_DIR}/abstract_factory/*)

add_executable(builder
  ${SOURCES_UTILS}
  ${SOURCES_BUILDER}
  builder/main.cpp)

target_include_directories(builder PUBLIC 
  ${HEADERS_DIR}/utils
  ${HEADERS_DIR}/builder)


add_executable(abstract_factory
  ${SOURCES_UTILS}
  ${SOURCES_BUILDER}
  ${SOURCES_ABSTRACT_FACTORY}
  abstract_factory/main.cpp)

target_include_directories(abstract_factory PUBLIC 
  ${HEADERS_DIR}/utils
  ${HEADERS_DIR}/builder
  ${HEADERS_DIR}/abstract_factory)
