#include "view.hpp"

#include <format>
#include <iostream>

void View::print_task(std::string task_name, size_t indent_level,
                      char indent_char, Color color) {
  std::cout << std::string(indent_level, indent_char) << get_color(color)
            << task_name << std::endl;
}

void View::print_menu() {
  size_t indent_level{2};

  print_task("1. Show dashboard", indent_level);
  print_task("2. Add task", indent_level);
  print_task("3. Remove task", indent_level);
  print_task("4. Edit task", indent_level);
  print_task("5. Finish task", indent_level);
  print_task("6. Mark as finished for today", indent_level);
  print_task("7. Mark as complete", indent_level);
  print_task("8. Add daily report", indent_level);
  print_task("9. Exit", indent_level);
}
