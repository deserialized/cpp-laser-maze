#include "Menu.h"

int main() {
  Menu menu;
  menu.init();

  // Test interaction
  Menu::clear();
  menu.display_static();
  Menu::display_query("How are you?");
  Menu::clear();
  Menu::display_query("Cool!");

  return 0;
}
