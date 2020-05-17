###############################################################################
# file: CMakeLists.txt
# author: Brendan Berg
# MIT License
# Copyright (c) 2020 Brendan Berg
###############################################################################

cmake_minimum_required(VERSION 3.16)

###############################################################################
# IDE setup
###############################################################################
get_directory_property(HAS_PARENT PARENT_DIRECTORY)
if(NOT HAS_PARENT)
    set(AVR_MCU atmega328p)
    project(multichannel_led C)
endif(NOT HAS_PARENT)


###############################################################################
# project files
###############################################################################
add_avr_library(multichannel_led
        multichannel_led.c
        multichannel_led.h
)
