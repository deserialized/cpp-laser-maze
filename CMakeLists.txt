cmake_minimum_required(VERSION 3.27)
project(cpp_laser_maze)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_laser_maze
    src/main.cpp
    src/menus/Menu.cpp
    src/menus/Menu.h
    src/menus/MainMenu.cpp
    src/menus/MainMenu.h
    src/utils/MazeGenerator.cpp
    src/utils/MazeGenerator.h
    src/pieces/Piece.cpp
    src/pieces/Piece.h
    src/utils/Maze.cpp
    src/utils/Maze.h
)
