#include <iostream>
using namespace std;

int main() {
  enum Letters { ALPHA, BETA, DELTA };

  const int SIZE = 3;
  int stock[SIZE] = {0};
  stock[ALPHA] = 100;
  stock[BETA] = 40;
  stock[DELTA] = 75;
  for (int letter = ALPHA; letter <= DELTA; letter += 1)
    cout << stock[letter] << endl;
}
