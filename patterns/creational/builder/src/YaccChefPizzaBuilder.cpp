#include "YaccChefPizzaBuilder.hpp"

YaccChefPizza YaccChefPizzaBuilder::GetPizza() {
  PreparePizza();
  return pizza;
}

void YaccChefPizzaBuilder::SetHam() {
  // ignore
}

void YaccChefPizzaBuilder::SetCheese() {
  pizza.SetCheese();
}

void YaccChefPizzaBuilder::SetMushrooms() {
  pizza.SetMushrooms();
}

void YaccChefPizzaBuilder::SetGreenery() {
  // ignore
}

void YaccChefPizzaBuilder::SetBacon() {
  pizza.SetBacon();
}

void YaccChefPizzaBuilder::SetTomatoes() {
  pizza.SetTomatoes();
}
