cmake_minimum_required(VERSION 3.16)
project(multichannel_led C)

set(CMAKE_C_STANDARD 11)

add_library(multichannel_led library.c library.h)