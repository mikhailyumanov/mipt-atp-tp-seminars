#pragma once

#include "Pizza.hpp"


class YaccChefPizza : public Pizza {
 public:
  void Print() const override;

  void SetBacon()     { bacon_amount     = 5; }
  void SetCheese()    { cheese_amount    = 5; }
  void SetMushrooms() { mushrooms_amount = 5; }
  void SetTomatoes()  { tomatoes_amount  = 5; }

 private:
  int bacon_amount;
  int cheese_amount;
  int mushrooms_amount;
  int tomatoes_amount;
};
