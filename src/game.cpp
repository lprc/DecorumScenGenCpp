#include "game.hpp"
#include <cassert>
#include <iostream>

void Game::printGameboard() {
  if (playerCount == 4) {
    assert(roomBedl);
    assert(roomBedr);
    assert(roomKit);
    assert(roomLiv);
  }

  std::cout << "Gameboard:" << std::endl;

  if (playerCount == 4) {
    std::cout << "Bedroom L:" << *roomBedl << std::endl;
    std::cout << "Bedroom R:" << *roomBedr << std::endl;
    std::cout << "Kitchen:" << *roomKit << std::endl;
    std::cout << "Living Room:" << *roomLiv << std::endl;
  }
}

void Game::randomGameboard() {}

void Game::generateConditions() {}

void Game::generateScenario() {}
