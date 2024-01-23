#include "print_stack.hpp"

#include <iostream>

Print_stack::Print_stack() = default;
Print_stack::~Print_stack() = default;

void Print_stack::print_stack(std::string text) {
  std::cout << "text: " << text << std::endl;
}
