#include <iostream>

int main() {
    try {
    int x = 5;
    int y = 0;
    if (y == 0) {
      throw "Division by zero";
    }
    int z = x / y;
  } catch (const char* e) {
    std::cout << "Error: " << e << std::endl;
  }
    return 0;
}
