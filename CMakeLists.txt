cmake_minimum_required(VERSION 3.15)
project(projet2A)


# SFML
## If you want to link SFML statically
set(SFML_STATIC_LIBRARIES TRUE)

## In most cases better set in the CMake cache
set(SFML_DIR "./library/frameworks/SFML-2.5.1/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

set(SOURCE_FILES main.cpp)
set(HEADER_FILES)
add_executable(projet2A ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(projet2A sfml-system sfml-window sfml-graphics sfml-network sfml-audio)