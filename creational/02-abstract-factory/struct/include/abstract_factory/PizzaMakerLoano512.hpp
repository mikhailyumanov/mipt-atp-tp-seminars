#pragma once

#include "AbstractPizzaMaker.hpp"


class PizzaMakerLoano512 : public AbstractPizzaMaker {
 public:
  HamMushroomPizza GetHamMushroomPizza() override;
  YaccChefPizza GetYaccChefPizza() override;
};


