cmake_minimum_required(VERSION 3.10)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

add_executable(freetypeTest main.cpp)
add_subdirectory(external/freetype)
#set_property(TARGET freetypeTest PROPERTY CXX_STANDARD 17)
#set_property(TARGET freetypeTest PROPERTY CXX_STANDARD_REQUIRED ON)

set_property(TARGET freetypeTest PROPERTY CXX_STANDARD 17)
set_property(TARGET freetypeTest PROPERTY CXX_STANDARD_REQUIRED ON)