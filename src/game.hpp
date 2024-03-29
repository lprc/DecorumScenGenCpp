#pragma once

#include "room.hpp"
#include <memory>

class Game {
public:
  int playerCount;
  std::unique_ptr<Room> roomBedl = nullptr;
  std::unique_ptr<Room> roomBedr = nullptr;
  std::unique_ptr<Room> roomLiv = nullptr;
  std::unique_ptr<Room> roomKit = nullptr;
  std::unique_ptr<Room> roomBath = nullptr;
};