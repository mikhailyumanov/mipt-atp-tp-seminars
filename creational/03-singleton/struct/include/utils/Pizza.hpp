#pragma once

#include <iostream>

#include "IngredientsLogger.hpp"


class Pizza {
 public:
  virtual void Print() const = 0;
};
