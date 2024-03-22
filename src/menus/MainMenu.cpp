#include "MainMenu.h"
#include "../utils/Colours.h"

/* ::init()
 * Initialise the main menu
 */
void MainMenu::init()
{
  staticText = FRED("\n\n░▒▓█▓▒░       ░▒▓██████▓▒░ ░▒▓███████▓▒░▒▓████████▓▒░▒▓███████▓▒░                          \n░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░                         \n░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░                         \n░▒▓█▓▒░      ░▒▓████████▓▒░░▒▓██████▓▒░░▒▓██████▓▒░ ░▒▓███████▓▒░                          \n░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░                         \n░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░                         \n░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░                         \n                                                                                           \n                                                                                           \n                              ░▒▓██████████████▓▒░ ░▒▓██████▓▒░░▒▓████████▓▒░▒▓████████▓▒░ \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░        \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░    ░▒▓██▓▒░░▒▓█▓▒░        \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░  ░▒▓██▓▒░  ░▒▓██████▓▒░   \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓██▓▒░    ░▒▓█▓▒░        \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░        \n                              ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓████████▓▒░ \n\n");
}

/* ::run()
 * Executes the menu sequence
 */
void MainMenu::run()
{
  std::string response;
  while (true) {
    display_static();

    display(BOLD(FBLU("[P]"))"lay");
    display(BOLD(FBLU("[S]"))"elect Maze");
    response = display_query(BOLD(FBLU("[R]"))"andom Mazes\n");
    clear();

    if ( is_valid_response(response) ) break;
  }
}

/* ::isValidResponse()
 * Determines whether the given menu response is valid
 */
bool MainMenu::is_valid_response(const std::string& response)
{
  if ( response == "P" ) return ( true );
  if ( response == "S" ) return ( true );
  if ( response == "R" ) return ( true );
  return ( false );
}