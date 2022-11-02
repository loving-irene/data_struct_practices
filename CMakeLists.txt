cmake_minimum_required(VERSION 3.17)
project(data_struct_practices C)

set(CMAKE_C_STANDARD 11)

include_directories(Question)

add_executable(data_struct_practices
        Question/1_optional.c)
