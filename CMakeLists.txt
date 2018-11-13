cmake_minimum_required(VERSION 3.10)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build everything as static.")
project(FreetypeTest CXX)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

add_executable(freetypeTest main.cpp)
add_subdirectory(external/freetype)
target_link_libraries(freetypeTest PUBLIC freetype)

#set_property(TARGET freetypeTest PROPERTY CXX_STANDARD 17)
#set_property(TARGET freetypeTest PROPERTY CXX_STANDARD_REQUIRED ON)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Anke.ttf ${CMAKE_CURRENT_BINARY_DIR}/Anke.ttf COPYONLY)