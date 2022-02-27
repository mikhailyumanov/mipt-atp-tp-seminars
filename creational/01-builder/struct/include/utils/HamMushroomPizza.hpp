#pragma once

#include "Pizza.hpp"


class HamMushroomPizza : public Pizza {
 public:
  void Print() const override;

  void SetHam();
  void SetCheese();
  void SetMushrooms();
  void SetGreenery();

 private:
  int ham_amount;
  int cheese_amount;
  int mushrooms_amount;
  int greenery_amount;
};
