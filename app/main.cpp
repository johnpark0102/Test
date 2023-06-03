#include <iostream>

#include "Utils.hpp"

int main() {
  try {
    std::cout << jsp::get_name() << std::endl;
    return 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
