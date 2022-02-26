#include "HamMushroomPizzaBuilder.hpp"

HamMushroomPizza HamMushroomPizzaBuilder::GetPizza() const {
  PreparePizza();
  return pizza;
}

void YaccChefPizzaBuilder::SetHam() {
  pizza.SetHam();
}

void YaccChefPizzaBuilder::SetCheese() {
  pizza.SetCheese();
}

void YaccChefPizzaBuilder::SetMushrooms() {
  pizza.SetMushrooms();
}

void YaccChefPizzaBuilder::SetGreenery() {
  pizza.SetGreenery();
}

void YaccChefPizzaBuilder::SetBacon() {
  // ignore
}

void YaccChefPizzaBuilder::SetTomatoes() {
  // ignore
}

