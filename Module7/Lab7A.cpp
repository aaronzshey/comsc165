#include <fstream>
#include <iostream>
using namespace std;
struct Part {
  char name[20];
  int qty;
  double price;
};
int main() {
  Part a = {"Gasket", 5, 12.95};
  Part b = {"Cap", 3, 4.99};
  Part c = {"Plug", 4, 7.88};

  fstream f;
  f.open("records.dat", ios::out | ios::binary);

  if (f.is_open()) {
    f.write(reinterpret_cast<char *>(&a), sizeof(a));
    f.write(reinterpret_cast<char *>(&b), sizeof(b));
    f.write(reinterpret_cast<char *>(&c), sizeof(c));
  }
}
