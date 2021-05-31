cmake_minimum_required(VERSION 3.16)
project(basic-algorithm C)

set(CMAKE_C_STANDARD 11)

include_directories(lib)

link_directories(lib)

set(LINUX_LIB /mnt/f/Programming/C/common-functions/cmake-build-debug/libcommon-functions.so)


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/arithmetic.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB ARITHMETIC_SRC arithmetic/*.c arithmetic/*.h arithmetic/*/*.c arithmetic/*/*.h lib/common-functions.h)
add_executable(arithmetic-algorithm ${ARITHMETIC_SRC})
target_link_libraries(arithmetic-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/string-handling.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB STRING_HANDLING_SRC string-handling/*.c string-handling/*.h string-handling/*/*.c string-handling/*/*.h lib/common-functions.h)
add_executable(string-handling-algorithm ${STRING_HANDLING_SRC})
target_link_libraries(string-handling-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/counting.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB COUNTING_SRC counting/*.c counting/*.h counting/*/*.c counting/*/*.h lib/common-functions.h)
add_executable(counting-algorithm ${COUNTING_SRC})
target_link_libraries(counting-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/matrix.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB MATRIX_SRC matrix/*.c matrix/*.h matrix/*/*.c matrix/*/*.h lib/common-functions.h)
add_executable(matrix-algorithm ${MATRIX_SRC})
target_link_libraries(matrix-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/geometry.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB GEOMETRY_SRC geometry/*.c geometry/*.h geometry/*/*.c geometry/*/*.h lib/common-functions.h)
add_executable(geometry-algorithm ${GEOMETRY_SRC})
target_link_libraries(geometry-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/number-sequence.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB NUMBER_SEQUENCE_SRC number-sequence/*.c number-sequence/*.h number-sequence/*/*.c number-sequence/*/*.h lib/common-functions.h)
add_executable(number-sequence-algorithm ${NUMBER_SEQUENCE_SRC})
target_link_libraries(number-sequence-algorithm ${LINUX_LIB})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/graph.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB GRAPH_SRC graph/*.c graph/*.h graph/*/*.c graph/*/*.h lib/common-functions.h)
add_executable(graph-algorithm ${GRAPH_SRC})
target_link_libraries(graph-algorithm ${LINUX_LIB})


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/sorting.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB SORTING_SRC sorting/*.c sorting/*.h sorting/*/*.c sorting/*/*.h lib/common-functions.h)
add_executable(sorting-algorithm ${SORTING_SRC})
target_link_libraries(sorting-algorithm ${LINUX_LIB})


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/menu/searching.menu.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(GLOB SEARCHING_SRC searching/*.c searching/*.h searching/*/*.c searching/*/*.h lib/common-functions.h)
add_executable(searching-algorithm ${SEARCHING_SRC})
target_link_libraries(searching-algorithm ${LINUX_LIB})