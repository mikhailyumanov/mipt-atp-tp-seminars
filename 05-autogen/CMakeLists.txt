cmake_minimum_required(VERSION 3.20)

project(AutogenExample
  VERSION 0.4
  DESCRIPTION "An example of project with cmake-generated files"
  LANGUAGES CXX
  )

option(GEN "generate files" ON)

set(HEADERS_DIR "${PROJECT_SOURCE_DIR}/include")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(GEN_DIR "${PROJECT_SOURCE_DIR}/gen")

add_custom_command(
  OUTPUT print.hpp print.cpp
  COMMAND python ${GEN_DIR}/generate_print.py ${GEN_DIR}/data.json ${HEADERS_DIR}/print.hpp ${SRC_DIR}/print.cpp 
  #  DEPENDS generate_print.py data.json
  COMMENT "Generating prints from json"
)

add_custom_target(generate DEPENDS print.hpp print.cpp)

if (GEN)
else (GEN)
  add_executable(exec main.cpp)
  add_dependencies(exec print)
  add_subdirectory(src)
  target_link_libraries(exec PUBLIC print)
endif (GEN)
