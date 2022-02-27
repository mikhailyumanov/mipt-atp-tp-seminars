#include "HamMushroomPizza.hpp"

void HamMushroomPizza::Print() const {
  std::cout << "HamMushroomPizza" << std::endl;
  std::cout << "ham: "       << ham_amount       << std::endl;
  std::cout << "cheese: "    << cheese_amount    << std::endl;
  std::cout << "mushrooms: " << mushrooms_amount << std::endl;
  std::cout << "greenery: "  << greenery_amount  << std::endl;
}

void HamMushroomPizza::SetHam()       { ham_amount       = 5; }
void HamMushroomPizza::SetCheese()    { cheese_amount    = 6; }
void HamMushroomPizza::SetMushrooms() { mushrooms_amount = 7; }
void HamMushroomPizza::SetGreenery()  { greenery_amount  = 8; }
