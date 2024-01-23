#pragma once

#include <string>
#include <vector>

#include "command.hpp"
// #include "stack.hpp"

class Model {
  Model() = delete;

  static std::vector<Command> commands;

  // static int add_command(std::string command_name);
public:
  // static vector<Command> get_commands();
  static int add_command(std::string command_name, CommandType command_type,
                         std::function<void()> func);

  static int create_stack();
};
