#pragma once

#include "Pizza.hpp"


class YaccChefPizza : public Pizza {
 public:
  void Print() const override;

  // YOUR CODE HERE

 private:
  int bacon_amount;
  int cheese_amount;
  int mushrooms_amount;
  int tomatoes_amount;
};
