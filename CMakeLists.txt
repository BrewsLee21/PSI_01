cmake_minimum_required(VERSION 4.1)
project(PSI_UDP C)

set(CMAKE_C_STANDARD 11)

add_executable(PSI_UDP
        ../buffer/receiver.c
        ../buffer/sender.c
        ../buffer/utils.c)
