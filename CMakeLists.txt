cmake_minimum_required(VERSION 3.3)
project(ac_redis)

#set(CMAKE_CXX_FLAGS_DEBUG "-g3")
#set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -g3")

aux_source_directory(. ROOT_SRC_LIST)
add_library(acredis STATIC ${ROOT_SRC_LIST})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
link_directories(${PROJECT_SOURCE_DIR}/lib)
