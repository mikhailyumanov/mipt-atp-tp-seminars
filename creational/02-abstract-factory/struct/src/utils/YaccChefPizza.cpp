#include "YaccChefPizza.hpp"

void YaccChefPizza::Print() const {
  std::cout << "YaccChefPizza" << std::endl;
  std::cout << "bacon: "     << bacon_amount     << std::endl;
  std::cout << "cheese: "    << cheese_amount    << std::endl;
  std::cout << "mushrooms: " << mushrooms_amount << std::endl;
  std::cout << "tomatoes: "  << tomatoes_amount  << std::endl;
}

void YaccChefPizza::SetBacon()     { bacon_amount     = 1; }
void YaccChefPizza::SetCheese()    { cheese_amount    = 2; }
void YaccChefPizza::SetMushrooms() { mushrooms_amount = 3; }
void YaccChefPizza::SetTomatoes()  { tomatoes_amount  = 4; }
