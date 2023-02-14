#include <iostream>
using namespace std;
void swap(int& first, int& second) {
int temp = first;
first = second;
second = temp;
}
int main() {
  bool swapFlag;

  int a[7] = {7, 9, 8, 2, 1, 4, 3};

  do {

    swapFlag = false;
    for (int i : a) {
      cout << i;
    }
    for (int i = 0; i < 6; i++) {

      if (a[i] > a[i + 1]) {
				swap(a[i], a[i+1]);
        swapFlag = true;
      }
    }

    cout << "\n";
  } while (swapFlag == true);
}
