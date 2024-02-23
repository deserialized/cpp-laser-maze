#include <csignal>

#include "menus/Menu.h"
#include "menus/MainMenu.h"

void interrupt_handler(int signum)
{
  Menu::clear();
  exit(signum);
}

int main()
{
  // Assign interrupt vectors to handlers
  signal(SIGINT, interrupt_handler);

  // Initial terminal clear
  Menu::clear();

  // Launch main menu
  MainMenu menu;
  menu.init();
  menu.run();

  // Final terminal clear
  Menu::clear();
  return 0;
}
