#pragma once

#include "Pizza.hpp"


class AbstractBuilder {
 public:
  virtual Pizza GetPizza() const = 0;

  // YOUR CODE HERE
};
