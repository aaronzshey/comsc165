#include <iostream>
using namespace std;

int main() {
  int x = 0, y = 2, z = 4, i = 0;

  for (; i < 3; x += 3, z++, i++)
    y += 2;

  cout << "At step 1: "
       << "\n";
  cout << "x : " << x << "\n";
  cout << "y : " << y << "\n";
  cout << "z : " << z << "\n";
  cout << "i : " << i << "\n";

  do {
    x++;
    i += 3;
  } while (i < 2);

  cout << "At step 2: "
       << "\n";
  cout << "x : " << x << "\n";
  cout << "y : " << y << "\n";
  cout << "z : " << z << "\n";
  cout << "i : " << i << "\n";

  while (i > 0 && z > 0) {
    z -= 2;

    if (i % 2 == 0)
      continue;
    --i;
  }

  cout << "At step 3: "
       << "\n";
  cout << "x : " << x << "\n";
  cout << "y : " << y << "\n";
  cout << "z : " << z << "\n";
  cout << "i : " << i << "\n";

  for (;;) {

    x = y;
    if (i == 9)
      break;
    z++;
    i++;
  }

  cout << "At step 4: "
       << "\n";
  cout << "x : " << x << "\n";
  cout << "y : " << y << "\n";
  cout << "z : " << z << "\n";
  cout << "i : " << i << "\n";
}
