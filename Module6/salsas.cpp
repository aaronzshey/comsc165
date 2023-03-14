#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Salsa {
  string name;
  int sold;
};

int main() {
  vector<string> names = {"mild", "medium", "sweet", "hot", "zesty"};
  int sz = names.size();
  Salsa salsaList[sz];

  for (int i = 0; i < sz; i++) {
    int sales = 0;
    cout << "Enter jars of " << names[i] << " sold: ";
    cin >> sales;
    salsaList[i] = {names[i], sales};
  }

  // sort the list?!
  for (int i = 0; i < sz; i++) {
    int second = salsaList[i + 1].sold;
    int first = salsaList[i].sold;
    if (first > second) {
      int temp = first;
      first = second;
      second = temp;
    } else {
      continue;
    }
  }

  for (int i = 0; i < sz; i++) {
    cout << salsaList[i].sold;
  }
}
