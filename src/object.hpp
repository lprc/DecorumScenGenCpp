#pragma once

#include "enums.hpp"
#include <ostream>

class Object {
public:
  TOBJ type;
  TSTYLE style;
  TCOLOR color;

  friend std::ostream &operator<<(std::ostream &os, const Object &obj);
};