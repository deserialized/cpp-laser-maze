#ifndef CPP_LASER_MAZE_MAINMENU_H
#define CPP_LASER_MAZE_MAINMENU_H

#include "Menu.h"

class MainMenu : public Menu
{
public:
  void init() override;
  void run();
private:
  static bool is_valid_response(const std::string& response);
};

#endif //CPP_LASER_MAZE_MAINMENU_H