#ifndef CPP_LASER_MAZE_MAZEGENERATOR_H
#define CPP_LASER_MAZE_MAZEGENERATOR_H

#include "Maze.h"

class MazeGenerator {
public:
  // Constructor
  MazeGenerator();
  // Initialises the maze generator
  void init();
  // Creates a new maze
  Maze generate_maze();
  // Setters & Getters
  void set_maze_difficulty(int);
private:
  // Maze difficulty value (higher = harder), default = 1
  int difficulty{};
  // Use maze difficulty as quantifier for maze size calculation
  int calculate_maze_size() const;
};

#endif //CPP_LASER_MAZE_MAZEGENERATOR_H