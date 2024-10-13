cmake_minimum_required(VERSION 3.22.1-1ubuntu1)

project(foo)

add_executable(foo extern_main.c foo.c)
