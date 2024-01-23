#pragma once

#include <string>

class Task {
  std::string name;

public:
  Task();
  ~Task();

  std::string get_name();
  std::string set_name(std::string name);
}
