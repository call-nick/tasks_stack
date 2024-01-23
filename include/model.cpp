#include "model.hpp"

int Model::add_command(std::string command_name, CommandType command_type,
                       std::function<void()> func) {
  commands.push_back({command_name, command_type, func});
}
