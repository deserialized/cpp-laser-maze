#include <vector>
#include "MazeGenerator.h"
#include "../pieces/Piece.h"

// CONFIGURATION
const int DEFAULT_MAZE_SIZE = 4;

// IMPLEMENTATION

/* ::MazeGenerator()
 * Default constructor
 */
MazeGenerator::MazeGenerator() = default;

/* ::init()
 * Initialises a new maze generator object
 */
void MazeGenerator::init()
{
  difficulty = 1;
}

/* ::generate_maze()
 * Generates a new maze subject to the set size
 */
Maze MazeGenerator::generate_maze()
{
  // Construct grid
  std::vector<std::vector<Piece>> maze;

  // Initialise grid
  const int size = calculate_maze_size();

  // Populate grid

}

/* ::set_maze_size
 * Sets the size of generated mazes
 */
void MazeGenerator::set_maze_difficulty(const int dif)
{
  difficulty = dif;
}

/* ::calculate_maze_size()
 * Calculates a maze size based on the set generation difficulty quantifier
 */
int MazeGenerator::calculate_maze_size() const
{
  return DEFAULT_MAZE_SIZE + (difficulty - 1);
}