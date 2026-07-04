cmake_minimum_required(VERSION 4.2)
project(Playground C)

set(CMAKE_C_STANDARD 23)

# 1. This creates a target just for your main.c file
add_executable(hello_world main.c
        Arrays_of_Structs.c
        Writing_to_files.c
        Reading_to_files.c
        Malloc.c
        Realloc.c)

# 2. This creates a separate target just for your Structs_C.c file
add_executable(structs_demo Structs_C.c)