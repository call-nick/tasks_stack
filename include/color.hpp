#pragma once

#include <string>

enum class Color {
  none = 0,
  black,
  red,
  green,
  yellow,
  blue,
  cyan,
  white,

  bright = 0x10,

  bright_black = bright | black,
  bright_red = bright | red,
  bright_green = bright | green,
  bright_yellow = bright | yellow,
  bright_blue = bright | blue,
  bright_cyan = bright | cyan,
  bright_white = bright | white
};

std::string get_color(Color code);
