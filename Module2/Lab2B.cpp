#include "Lab2BFunctions.h"

#include <iostream>
using namespace std;

int main() {
  int x = 1, y = 2;
  bacon(x);
  cout << "x after bacon: " << x << "\n";
  cout << "y after bacon: " << y << "\n";
  foo(y);
  cout << "x after foo: " << x << "\n";
  cout << "y after foo: " << y << "\n";
  x = spam(x, y);
  cout << "x after spam: " << x << "\n";
  cout << "y after spam: " << y << "\n";
  eggs(x, y);
  cout << "x after eggs: " << x << "\n";
  cout << "y after eggs: " << y << "\n";
  for (int i = 0; i < 3; i++)
    ham(x, y);

  cout << "x after ham loop: " << x << "\n";
  cout << "y after ham loop: " << y << "\n";
}
