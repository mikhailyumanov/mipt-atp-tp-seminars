#include "HamMushroomPizzaBuilder.hpp"

HamMushroomPizza HamMushroomPizzaBuilder::GetPizza()  {
  PreparePizza();
  return pizza;
}

void HamMushroomPizzaBuilder::SetHam() {
  pizza.SetHam();
}

void HamMushroomPizzaBuilder::SetCheese() {
  pizza.SetCheese();
}

void HamMushroomPizzaBuilder::SetMushrooms() {
  pizza.SetMushrooms();
}

void HamMushroomPizzaBuilder::SetGreenery() {
  pizza.SetGreenery();
}

void HamMushroomPizzaBuilder::SetBacon() {
  // ignore
}

void HamMushroomPizzaBuilder::SetTomatoes() {
  // ignore
}

