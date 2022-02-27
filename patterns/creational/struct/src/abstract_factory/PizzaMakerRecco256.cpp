#include "PizzaMakerRecco256.hpp"
#include "HamMushroomPizzaBuilder.hpp"
#include "YaccChefPizzaBuilder.hpp"

HamMushroomPizza PizzaMakerRecco256::GetHamMushroomPizza() {
  std::cout << "[Recco256] loading ingredients for "
               "ham'n'mushroom pizza..." << std::endl;
  std::cout << "[Recco256] put together" << std::endl;
  std::cout << "[Recco256] bake pizza..." << std::endl;
  std::cout << "[Recco256] finished" << std::endl;

  return HamMushroomPizzaBuilder().GetPizza();
}

YaccChefPizza PizzaMakerRecco256::GetYaccChefPizza() {
  std::cout << "[Recco256] loading ingredients for "
               "Yacc's chef pizza..." << std::endl;
  std::cout << "[Recco256] put together" << std::endl;
  std::cout << "[Recco256] bake pizza..." << std::endl;
  std::cout << "[Recco256] finished" << std::endl;

  return YaccChefPizzaBuilder().GetPizza();
}


