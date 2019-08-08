cmake_minimum_required(VERSION 3.0.0)
project(munchkin VERSION 0.1.0)

include_directories(includes includes/Cartes)

file(GLOB SOURCES
    includes/*.h
    src/*.cpp
    includes/Carte/*.h
    src/Carte/*.cpp
)

add_executable(Munchkin ${SOURCES})
