#pragma once

#include <string>

#include "color.hpp"

class View {
  View() = delete;
  static void print_task(std::string task_name, size_t indent_level = 0,
                         char indent_char = ' ', Color color = Color::none);

public:
  static void print_menu();
};
