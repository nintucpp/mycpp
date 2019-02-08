cmake_minimum_required(VERSION 3.10.2)
project(DynamicArray)
 set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#Bring the headers, such as Student.h into the project
include_directories(include)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(DynamicArray ${SOURCES})