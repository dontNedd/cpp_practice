// Area of a Triangle
//
#include <iostream>

int triArea(int base, int height) {
  int area = (base * height) / 2;
  std::cout << "\nBase: " << base << "\nHeight: " << height << "\nArea: " << area << '\n';
  return area;
}

int main() {
triArea(3, 2);
triArea(7, 4);
triArea(10, 10);
}
