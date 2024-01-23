#pragma once

#include <stack>
#include <string>

#include "task.hpp"

class Stack {
  std::string name;
  std::stack<Task> tasks;

public:
  Stack(std::string name);
  ~Stack();
  void add_task();
};
