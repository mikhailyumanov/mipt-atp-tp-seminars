#pragma once

#include "Pizza.hpp"


class AbstractBuilder {
 public:
  void PreparePizza();

  virtual void SetHam() = 0;
  virtual void SetCheese() = 0;
  virtual void SetMushrooms() = 0;
  virtual void SetGreenery() = 0;
  virtual void SetBacon() = 0;
  virtual void SetTomatoes() = 0;
};
