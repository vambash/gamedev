cmake_minimum_required(VERSION 3.25)
project(HelloSFML)

set(CMAKE_CXX_STANDARD 17)

# Add SFML include and lib paths for MSYS2
include_directories(C:/msys64/mingw64/include)
link_directories(C:/msys64/mingw64/lib)

add_executable(main main.cpp)

# Link SFML libraries
target_link_libraries(main sfml-graphics sfml-window sfml-system)
