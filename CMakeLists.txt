cmake_minimum_required(VERSION 3.16)
project(basic_algorithm C)

set(CMAKE_C_STANDARD 11)

include_directories(lib)

link_directories(lib)

file(GLOB ARITHMETIC_SRC arithmetic/*.c arithmetic/*.h arithmetic/*/*.c arithmetic/*/*.h lib/common-functions.h)

add_executable(arithmetic-algorithm ${ARITHMETIC_SRC})

target_link_libraries(arithmetic-algorithm libcommon-functions.dll.a)

file(GLOB STRING_HANDLING_SRC string-handling/*.c string-handling/*.h string-handling/*/*.c string-handling/*/*.h lib/common-functions.h)

add_executable(string-handling ${STRING_HANDLING_SRC})

target_link_libraries(string-handling libcommon-functions.dll.a)