#pragma once

#include "YaccChefPizza.hpp"
#include "AbstractBuilder.hpp"


class YaccChefPizzaBuilder : public AbstractBuilder {
 public:
  YaccChefPizza GetPizza();

  void SetHam() override;
  void SetCheese() override;
  void SetMushrooms() override;
  void SetGreenery() override;
  void SetBacon() override;
  void SetTomatoes() override;

 private:
  YaccChefPizza pizza;
};

