#pragma once

#include <functional>
#include <memory>

// forward decls
class Game;

class Condition {
public:
  std::function<bool(Game)> f;
  std::unique_ptr<Game> game;
  bool isMet();
};