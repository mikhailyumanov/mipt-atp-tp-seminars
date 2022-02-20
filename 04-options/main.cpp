#include <iostream>

#include "print.hpp"

int main() {
#ifdef USE_PRINT
  print("Use custom print");
#else
  std::cout << "Use iostream" << std::endl;
#endif
}
