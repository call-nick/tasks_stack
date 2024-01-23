#include "command.hpp"

Command::Command(std::string name, CommandType command_type,
                 std::function<void()> func)
    : name(name), command_type(command_type), func(func) {}

Command::~Command() {}

void Command::run() { this->func(); }
