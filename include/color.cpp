#include "color.hpp"

std::string get_color(Color code) {
  std::string col;
  using enum Color;

  switch (code) {
  case black:
    col = "\033[1;30m";
    break;
  case red:
    col = "\033[0;31m";
    break;
  case green:
    col = "\033[0;32m";
    break;
  case yellow:
    col = "\033[0;33m";
    break;
  case blue:
    col = "\033[0;34m";
    break;
  case cyan:
    col = "\033[0;36m";
    break;

  case bright_black:
    col = "\033[0;37m";
    break;
  case bright_red:
    col = "\033[1;31m";
    break;
  case bright_green:
    col = "\033[1;32m";
    break;
  case bright_yellow:
    col = "\033[1;33m";
    break;
  case bright_blue:
    col = "\033[1;34m";
    break;
  case bright_cyan:
    col = "\033[1;36m";
    break;
  case bright_white:
    col = "\033[1;37m";
    break;
  case bright: // invalid
  case none:
  case white:
  default:
    col = "\033[0m";
  }
  return col;
}
