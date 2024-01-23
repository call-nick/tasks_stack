#include "model.hpp"

std::vector<Command> Model::commands;

void Model::add_command(std::string command_name, CommandType command_type,
                        std::function<void()> func) {
  commands.push_back({command_name, command_type, func});
}
