#pragma once

#include <functional>
#include <string>

enum class CommandType { COM_ADD_TASK, COM_REM_TASK, COM_EXIT };

class Command {
  std::string name; // name will be print in menu
  CommandType command_type;
  std::function<void()>
      func; // when command was selected this function will call

public:
  Command(std::string name, CommandType command_type,
          std::function<void()> func);
  ~Command();

  void run();
};
