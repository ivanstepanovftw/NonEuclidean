cmake_minimum_required(VERSION 3.14)
project(NonEuclidean)


find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
message(STATUS "\${SDL2_LIBRARIES}=${SDL2_LIBRARIES}")
message(STATUS "\${GLEW_LIBRARIES}=${GLEW_LIBRARIES}")



file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/NonEuclidean/*.cpp)
add_executable(NonEuclidean ${SOURCES})
target_include_directories(NonEuclidean
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/NonEuclidean
#                ${SDL2_INCLUDE_DIRS}
        )
target_link_libraries(NonEuclidean
        SDL2
        GLEW
        GL
        )
