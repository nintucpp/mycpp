cmake_minimum_required(VERSION 3.10.2)
project(Thread2)
 set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
#Bring the headers, such as Student.h into the project
#target_link_libraries(Thread threads::Threads)
#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

file(GLOB SOURCES "src/*.cpp")
add_executable(Thread2 ${SOURCES})
target_link_libraries( Thread2 Threads::Threads )
