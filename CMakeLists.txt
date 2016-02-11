cmake_minimum_required(VERSION 3.0)

set(APP_NAME Chappi)
project(${APP_NAME})

find_package(Threads REQUIRED)

if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-Wall -ansi -Wno-deprecated -pthread)
endif()

enable_testing()

add_subdirectory(src)
add_subdirectory(test)