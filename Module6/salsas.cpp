#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Salsa {
string name;
int sold;
};

int main() {
vector<string> names={"mild", "medium", "sweet", "hot", "zesty"};
Salsa salsaList[names.size()];

for (int i = 0; i < names.size(); i++) {
int sales = 0;
cout << "Enter jars of " << names[i] << " sold: ";
cin >> sales;
salsaList[i]={names[i], sales};
}

//sort the list?!

for (int i = 0; i < names.size(); 
cout << salsaList[1].name;

}
