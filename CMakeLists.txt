cmake_minimum_required(VERSION 3.14)
project(NonEuclidean)

#include(cmake/FindLibEpoxy.cmake)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

find_package(LibEpoxy REQUIRED)
find_package(GLFW 3.3 REQUIRED NAMES glfw3)
find_package(Boost 1.56 REQUIRED COMPONENTS iostreams)



file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/NonEuclidean/*.cpp)
add_executable(NonEuclidean ${SOURCES})
target_include_directories(NonEuclidean
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/NonEuclidean
#                ${SDL2_INCLUDE_DIRS}
                ${BOOST_INCLUDE_DIR}
        )
target_link_libraries(NonEuclidean
        glfw
        gl
        LibEpoxy
        )
