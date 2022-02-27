#include "HamMushroomPizza.hpp"

void HamMushroomPizza::Print() const {
  std::cout << "HamMushroomPizza" << std::endl;
  std::cout << "ham: "       << ham_amount       << std::endl;
  std::cout << "cheese: "    << cheese_amount    << std::endl;
  std::cout << "mushrooms: " << mushrooms_amount << std::endl;
  std::cout << "greenery: "  << greenery_amount  << std::endl;
}

void HamMushroomPizza::SetHam() {
  ham_amount = 5;
  IngredientsLogger::GetInstance().Log("5 ham used"); 
}

void HamMushroomPizza::SetCheese() {
  cheese_amount = 6;
  IngredientsLogger::GetInstance().Log("6 cheese used"); 
}

void HamMushroomPizza::SetMushrooms() {
  mushrooms_amount = 7;
  IngredientsLogger::GetInstance().Log("7 mushrooms used");
}

void HamMushroomPizza::SetGreenery() {
  greenery_amount = 8;
  IngredientsLogger::GetInstance().Log("8 tomatoes used");
}
