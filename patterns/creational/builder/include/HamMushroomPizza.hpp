#pragma once

#include "Pizza.hpp"


class HamMushroomPizza : public Pizza {
 public:
  void Print() const override;

  // YOUR CODE HERE

 private:
  int ham_amount;
  int cheese_amount;
  int mushrooms_amount;
  int greenery_amount;
};
