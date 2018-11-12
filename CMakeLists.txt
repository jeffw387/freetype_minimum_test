cmake_minimum_required(VERSION 3.10)
project(FreetypeTest CXX C)

add_executable(freetypeTest main.cpp)
add_subdirectory(freetype)
target_link_libraries(freetypeTest PUBLIC freetype stdc++fs)

set_property(TARGET freetypeTest PROPERTY CXX_STANDARD 17)
set_property(TARGET freetypeTest PROPERTY CXX_STANDARD_REQUIRED ON)