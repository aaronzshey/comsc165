#include <iostream>
#include <vector>
#include "Module3Functions.h"
using namespace std;

int main() {
  vector<int> a = {7, 9, 8, 2, 1, 4, 3};

  for (int i = 0; i < 6; i++) {
    int index = i;
    int minIndex = i;
    int minValue = a[i];
    for (int j = i + 1; j < 7; j++) {
      if (a[j] < minValue) {
        minValue = a[j];

        minIndex = j;
      }

    }
    a[minIndex] = a[i];
    a[i] = minValue;
		printVec(a);
  }
}
