#include "MainMenu.h"

/* ::init()
 * Initialise the main menu
 */
void MainMenu::init()
{
  staticText = "*----*\n|TEST|\n*----*";
}

/* ::run()
 * Executes the menu sequence
 */
void MainMenu::run()
{
  display_static();
  display_query("This is a test!");
}