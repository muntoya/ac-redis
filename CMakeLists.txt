cmake_minimum_required(VERSION 3.3)
project(ac_redis)

#set(CMAKE_CXX_FLAGS_DEBUG "-g3")
#set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -g3")

link_directories(${PROJECT_SOURCE_DIR}/lib /usr/local/lib)
aux_source_directory(. ROOT_LIB_LIST)
add_library(acredis STATIC ${ROOT_LIB_LIST})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

aux_source_directory(./tests TESTS_LIST)
add_executable(ac-test ${TESTS_LIST})
include_directories(/usr/local/include .)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
target_link_libraries(ac-test acredis boost_unit_test_framework-mt boost_system-mt)
message(STATUS ${LINK_DIRECTORIES})
