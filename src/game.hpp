#pragma once

#include "condition.hpp"
#include "room.hpp"
#include <memory>
#include <vector>

/**
 * @brief Manages the game, i.e. builds the rooms and generates conditions.
 *
 */
class Game {
public:
  int playerCount;
  std::unique_ptr<Room> roomBedl = nullptr;
  std::unique_ptr<Room> roomBedr = nullptr;
  std::unique_ptr<Room> roomLiv = nullptr;
  std::unique_ptr<Room> roomKit = nullptr;
  std::unique_ptr<Room> roomBath = nullptr;

  std::vector<Condition> allConds;

  /**
   * @brief Prints the gameboard to the console.
   *
   */
  void printGameboard();

  /**
   * @brief Generates a gameboard with randomly placed objects and wall colors.
   *
   */
  void randomGameboard();

  /**
   * @brief Generates all conditions, i.e. fills allConds.
   *
   */
  void generateConditions();

  /**
   * @brief Tries to generate a scenario that satisfies enough conditions for a
   * randomly generated gameboard. The gameboard must be randomly generated
   * first.
   *
   */
  void generateScenario();
};