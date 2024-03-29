#pragma once

#include "enums.hpp"
#include "object.hpp"
#include <memory>

class Room {
public:
  TCOLOR wallColor;
  std::unique_ptr<Object> lamp;
  std::unique_ptr<Object> curiosity;
  std::unique_ptr<Object> painting;

  friend std::ostream &operator<<(std::ostream &os, const Room &r);
};