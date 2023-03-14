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
	int sum=0;
  for (int i = 0; i < sz; i++) {
    int sales = 0;
    cout << "Enter jars of " << names[i] << " sold: ";
    cin >> sales;
		sum += sales;
    salsaList[i] = {names[i], sales};
  }
cout << "Salsa Name: Amount Sold";

string max;

  for (int i = 0; i < sz; i++) {
cout << salsaList[i].name << " " << salsaList[i].sold << "\n"; 

}
cout << "\n" << "Total sales: " << sum;
	}
