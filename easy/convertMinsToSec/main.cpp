// Convert minutes into seconds
//
#include <iostream>

int convert(int minutes) {
  int seconds = minutes * 60;
  std::cout << "Mins: " << minutes <<  " = " << seconds << '\n';
  return seconds;
}

int main() {
convert(5);
convert(3);
convert(2);
}
