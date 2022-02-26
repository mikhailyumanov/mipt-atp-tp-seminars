#pragma once

#include "Pizza.hpp"


class YaccChefPizza : public Pizza {
 public:
  void Print() const override;

  void SetBacon();
  void SetCheese();
  void SetMushrooms();
  void SetTomatoes();

 private:
  int bacon_amount;
  int cheese_amount;
  int mushrooms_amount;
  int tomatoes_amount;
};
