#include "PizzaMakerRecco256.hpp"
#include "PizzaMakerLoano512.hpp"

int main() {
  auto ham_mushroom_recco = PizzaMakerRecco256().GetHamMushroomPizza();
  auto ham_mushroom_loano = PizzaMakerLoano512().GetHamMushroomPizza();

  auto yacc_chef_recco = PizzaMakerRecco256().GetYaccChefPizza();
  auto yacc_chef_loano = PizzaMakerLoano512().GetYaccChefPizza();
}
