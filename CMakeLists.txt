cmake_minimum_required(VERSION 3.22)
project(Assign3_productBigger)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assign3_product
        main_product.cpp)
add_executable(Assign3_bigger
        main_bigger.cpp)
