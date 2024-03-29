#pragma once

#include "game.hpp"
#include <functional>
class Condition {
public:
  std::function<bool(Game)> f;
  std::unique_ptr<Game> game;
  bool isMet();
};