// Power Calculator
//
#include <iostream>

int circuitPower(int voltage, int current) {
  int sum = voltage * current;
  std::cout << "The circuit power: " << sum << '\n';
  return sum;
}

int main() {
 circuitPower(230, 10);
 circuitPower(110, 3);
 circuitPower(480, 20);
}
