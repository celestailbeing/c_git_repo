cmake_minimum_required(VERSION 3.0.0)
project(day03 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(day03 day03/main.c day03/count.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
