#include "HamMushroomPizza.hpp"
#include "YaccChefPizza.hpp"

int main() {
  auto ham_mushroom = HamMushroomPizzaBuilder().GetPizza();
  auto yacc_chef = YaccChefPizzaBuilder().GetPizza();

  ham_mushroom.Print();
  yacc_chef.Print();
}
