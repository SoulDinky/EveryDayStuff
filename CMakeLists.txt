cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(full_light_detector C CXX ASM)

set(CMAKE_C_STANDARD 11)

set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()



add_executable(full_light_detector
full_light_detector.c
)


target_link_libraries(full_light_detector pico_stdlib hardware_adc)

pico_enable_stdio_usb(full_light_detector 1)

pico_enable_stdio_uart(full_light_detector 0)



pico_add_extra_outputs(full_light_detector)
