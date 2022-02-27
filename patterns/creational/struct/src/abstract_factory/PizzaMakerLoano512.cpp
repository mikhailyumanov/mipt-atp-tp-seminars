#include "PizzaMakerLoano512.hpp"
#include "HamMushroomPizzaBuilder.hpp"
#include "YaccChefPizzaBuilder.hpp"

HamMushroomPizza PizzaMakerLoano512::GetHamMushroomPizza() {
  std::cout << "[Loano512] loading ingredients for "
               "ham'n'mushroom pizza..." << std::endl;
  std::cout << "[Loano512] put together" << std::endl;
  std::cout << "[Loano512] bake pizza..." << std::endl;
  std::cout << "[Loano512] finished" << std::endl;

  return HamMushroomPizzaBuilder().GetPizza();
}

YaccChefPizza PizzaMakerLoano512::GetYaccChefPizza() {
  std::cout << "[Loano512] loading ingredients for "
               "Yacc's chef pizza..." << std::endl;
  std::cout << "[Loano512] put together" << std::endl;
  std::cout << "[Loano512] bake pizza..." << std::endl;
  std::cout << "[Loano512] finished" << std::endl;

  return YaccChefPizzaBuilder().GetPizza();
}



