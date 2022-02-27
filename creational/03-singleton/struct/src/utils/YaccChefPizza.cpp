#include "YaccChefPizza.hpp"

void YaccChefPizza::Print() const {
  std::cout << "YaccChefPizza" << std::endl;
  std::cout << "bacon: "     << bacon_amount     << std::endl;
  std::cout << "cheese: "    << cheese_amount    << std::endl;
  std::cout << "mushrooms: " << mushrooms_amount << std::endl;
  std::cout << "tomatoes: "  << tomatoes_amount  << std::endl;
}

void YaccChefPizza::SetBacon() {
  bacon_amount = 1;
  IngredientsLogger::GetInstance().Log("1 bacon used"); 
}

void YaccChefPizza::SetCheese() {
  cheese_amount = 2; 
  IngredientsLogger::GetInstance().Log("2 cheese used"); 
}

void YaccChefPizza::SetMushrooms() {
  mushrooms_amount = 3;
  IngredientsLogger::GetInstance().Log("3 mushrooms used");
}

void YaccChefPizza::SetTomatoes() {
  tomatoes_amount = 4;
  IngredientsLogger::GetInstance().Log("4 tomatoes used");
}
