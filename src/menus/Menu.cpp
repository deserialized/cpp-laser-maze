#include <iostream>

#include "Menu.h"

/* ::Menu()
 * Default constructor
 */
Menu::Menu() = default;

/* ::init()
 * Initialise menu static text
 */
void Menu::init()
{
  staticText = "Hello world!";
}

/* ::display()
 * Display string in the terminal
 */
void Menu::display(const std::string &str)
{
  std::cout << str << std::endl;
}

/* ::display_static()
 * Display the menu's static text
 */
void Menu::display_static()
{
  display(staticText);
}

/* ::display_query()
 * Displays a string and returns the user response
 */
std::string Menu::display_query(const std::string &query)
{
  display(query);
  std::string response;
  std::cin >> response;
  return response;
}

/* ::clear()
 * Clears the terminal
 */
void Menu::clear()
{
  #if defined _WIN32
    system("cls");
  #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
  #elif defined (__APPLE__)
    system("clear");
  #endif
}