#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Salsa {
  string name;
  int sold;
};

int main() {
  const int sz = 5;
  Salsa salsaList[sz] = {
        {"mild"},
        {"medium"},
        {"sweet"},
        {"hot"},
        {"zesty"},
    };;
  int sum = 0;
  for (int i = 0; i < sz; i++) {
    int sales = 0;
    cout << "Enter jars of " << salsaList[i].name << " sold: ";
    cin >> sales;
    sum += sales;
		salsaList[i].sold=sales;
  }
  cout << "\nSalsa Name:\tAmount Sold\n";

  for (int i = 0; i < sz; i++) {
    cout << salsaList[i].name << "\t\t" << salsaList[i].sold << "\n";
  }

  cout << "\n"
       << "Total sales: " << sum << "\n";

  Salsa max = salsaList[0];

  for (int i = 0; i < sz - 1; i++) {

    if (salsaList[i].sold > max.sold) {
      max = salsaList[i];
    }
  }
  cout << "Highest selling salsa: " << max.name;
}
