set(SOURCE_LIB print.cpp)

add_library(print SHARED ${SOURCE_LIB})

target_include_directories(print PUBLIC ${HEADERS_DIR})

message(${HEADERS_DIR})
message(${CMAKE_PROJECT_NAME})

target_compile_features(print PUBLIC cxx_std_17)

