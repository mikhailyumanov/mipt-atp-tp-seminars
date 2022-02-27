#pragma once

#include "AbstractPizzaMaker.hpp"


class PizzaMakerRecco256 : public AbstractPizzaMaker {
 public:
  HamMushroomPizza GetHamMushroomPizza() override;
  YaccChefPizza GetYaccChefPizza() override;
};

