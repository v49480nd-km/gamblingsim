cmake_minimum_required(VERSION 3.31.4)

set(CMAKE_CXX_COMPILER GCC)
set(CMAKE_C_COMPILER GCC)
set(CMAKE_C STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(GamblingSimulator)
add_executable(${PROJECT_NAME}
    main.c
    game.c
)
