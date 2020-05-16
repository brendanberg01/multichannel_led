cmake_minimum_required(VERSION 3.16)

get_directory_property(HAS_PARENT PARENT_DIRECTORY)

if(NOT HAS_PARENT)
    project(multichannel_led C)
endif(NOT HAS_PARENT)

add_avr_library(multichannel_led
        library.c
        library.h
)
