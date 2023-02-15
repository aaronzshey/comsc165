#include <iostream>
#include <vector>
#include "Module3Functions.h"
using namespace std;

int main() {
  bool swapFlag;
  vector<int> a = {7, 9, 8, 2, 1, 4, 3};
  do {
    swapFlag = false;
		printVec(a);
    for (int i = 0; i < 6; i++) {
      if (a[i] > a[i + 1]) {
				swap(a[i], a[i+1]);
        swapFlag = true;
      }
    }
  } while (swapFlag == true);
}
