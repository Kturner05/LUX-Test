#ifndef constants_h
#define constants_h
#include <stdio.h>
#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream>
namespace lux
{
  // nlohmann::json j = nlohmann::json::parse()
  nlohmann::json GAME_CONSTANTS = nlohmann::json::parse(R"(
    {
      "UNIT_TYPES": {
        "WORKER": 0,
        "CART": 1
      },
      "RESOURCE_TYPES": {
        "WOOD": "wood",
        "COAL": "coal",
        "URANIUM": "uranium"
      },
      "DIRECTIONS": {
        "NORTH": "n",
        "WEST": "w",
        "EAST": "e",
        "SOUTH": "s",
        "CENTER": "c"
      },
      "PARAMETERS": {
        "DAY_LENGTH": 20,
        "NIGHT_LENGTH": 5,
        "MAX_DAYS": 200,
        "LIGHT_UPKEEP": {
          "CITY": 40,
          "WORKER": 4,
          "CART": 10
        },
        "CITY_ADJACENCY_BONUS": 10,
        "CITY_WOOD_COST": 100,
        "RESOURCE_CAPACITY": {
          "WORKER": 100,
          "CART": 2000
        },
        "WORKER_COLLECTION_RATE": {
          "WOOD": 20,
          "COAL": 10,
          "URANIUM": 1
        },
        "RESOURCE_TO_FUEL_RATE": {
          "WOOD": 1,
          "COAL": 5,
          "URANIUM": 25
        },
        "RESEARCH_REQUIREMENTS": {
          "COAL": 40,
          "URANIUM": 100
        },
        "CITY_ACTION_COOLDOWN": 10,
        "UNIT_ACTION_COOLDOWN": {
          "CART": 3,
          "WORKER": 2
        },
        "MAX_CELL_COOLDOWN": 6,
        "MIN_CELL_COOLDOWN": 0,
        "CART_ROAD_DEVELOPMENT_RATE": 0.5,
        "PILLAGE_RATE": 0.25
      }
    }
  )");
  enum DIRECTIONS
  {
    NORTH = 'n',
    EAST = 'e',
    SOUTH = 's',
    WEST = 'w',
    CENTER = 'c'
  };
  static const DIRECTIONS ALL_DIRECTIONS[] = { NORTH, EAST, SOUTH, WEST };
};
#endif