#ifndef CPP_LASER_MAZE_MAINMENU_H
#define CPP_LASER_MAZE_MAINMENU_H

#include "Menu.h"

class MainMenu : public Menu
{
public:
  void init() override;
  void run();
};

#endif //CPP_LASER_MAZE_MAINMENU_H