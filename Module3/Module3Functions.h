#include <iostream>
using namespace std;

void printVec(const vector<int> &a) {
  for (int i : a) {
    cout << i;
  }
  cout << "\n";
}

void swap(int &first, int &second) {
  int temp = first;
  first = second;
  second = temp;
}
