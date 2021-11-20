cmake_minimum_required(VERSION 3.10)

project(basic_declarations C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILE_FEATURES -Wall)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

set(SOURCES main.c
            examples_util.c
            examples_1_to_10.c
            examples_11_to_20.c
            include/main.h
            include/examples_def.h
            include/examples_util.h
            include/examples.h
)
add_executable(basic_declarations ${SOURCES})