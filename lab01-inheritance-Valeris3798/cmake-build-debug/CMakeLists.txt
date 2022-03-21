cmake_minimum_required(VERSION 3.16)
project(lab01_Inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(lab01_Inheritance
        ../src/main.cpp ../src/Base.cpp ../src/Base.h ../src/Derived1.cpp ../src/Derived1.h ../src/Derived2.cpp ../src/Derived2.h)
