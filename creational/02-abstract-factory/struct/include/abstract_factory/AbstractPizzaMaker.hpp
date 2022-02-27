#pragma once

#include "HamMushroomPizza.hpp"
#include "YaccChefPizza.hpp"


class AbstractPizzaMaker {
 public:
  virtual HamMushroomPizza GetHamMushroomPizza() = 0;
  virtual YaccChefPizza GetYaccChefPizza() = 0;
};
