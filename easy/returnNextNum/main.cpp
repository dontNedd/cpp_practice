// Return the Next Number form the Integer Passed
//
#include <iostream>

int addition(int a) {
  if(a == 0) {
    std::cout << a + 1 << '\n';
  } else if(a == 9) {
    std::cout << a + 1 << '\n';
  } else if(a == -3) {
    std::cout << a + 1 << '\n';
  } else {
    std::cout << "Error lol: \n";
  }
  return a;
}

int main() {
  addition(0);
  addition(9);
  addition(-3);
}
