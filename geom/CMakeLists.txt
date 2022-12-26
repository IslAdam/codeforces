cmake_minimum_required (VERSION 3.8)

project ("geom")

include_directories(.)

add_subdirectory(complex)

add_executable (complex.test complex.test.cpp)

add_executable (pendulum pendulum.cpp)

target_link_libraries(complex.test complex)
target_link_libraries(pendulum complex)