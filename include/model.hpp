#pragma once

#include <string>
#include <vector>

#include "command.hpp"
#include "stack.hpp"

class Model {

  static std::vector<Command> commands;

  Model() = delete;

  static void add_command(std::string command_name, CommandType command_type,
                          std::function<void()> func);

public:
  // static int create_stack();
};
