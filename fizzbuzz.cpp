#include <iostream>

using std::cout;
using std::endl;

constexpr int COUNT = 100;

int main() {
  for (int i = 1; i <= COUNT; ++i) {
    if (i % 3 == 0)
      cout << "Fizz, ";
