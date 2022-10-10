cmake_minimum_required(VERSION 3.0.0)
project(hello_c VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(hello_c day01/main.c day01/addfun.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
