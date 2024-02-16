#include "Menu.h"
#include "MainMenu.h"

int main() {
  // Initial terminal clear
  Menu::clear();

  // Inheritance test
  MainMenu menu;
  menu.init();
  menu.run();

  // Final terminal clear
  Menu::clear();
  return 0;
}
