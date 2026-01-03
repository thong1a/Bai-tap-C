cmake_minimum_required(VERSION 3.10)
project(textutils C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(textutils SHARED src/textutils.c)
target_include_directories(textutils PUBLIC include)

add_executable(textutils-demo examples/main.c)
target_link_libraries(textutils-demo PRIVATE textutils)

if (WIN32)
    set_target_properties(textutils PROPERTIES PREFIX "")
endif()
