#pragma once

#include "HamMushroomPizza.hpp"
#include "AbstractBuilder.hpp"


class HamMushroomPizzaBuilder : public AbstractBuilder {
 public:
  HamMushroomPizza GetPizza();

  void SetHam() override;
  void SetCheese() override;
  void SetMushrooms() override;
  void SetGreenery() override;
  void SetBacon() override;
  void SetTomatoes() override;

 private:
  HamMushroomPizza pizza;
};

