#ifndef CPP_LASER_MAZE_MENU_H
#define CPP_LASER_MAZE_MENU_H

#include <iostream>

class Menu {
public:
  // Constructor
  Menu();

  virtual // Initialisation
  void init();
  // Display content
  static void display(const std::string&);
  void display_static();
  static std::string display_query(const std::string&);
  // Clear content
  static void clear();
protected:
  std::string staticText;
};

#endif //CPP_LASER_MAZE_MENU_H