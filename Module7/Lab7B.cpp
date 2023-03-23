#include <fstream>
#include <iostream>
using namespace std;
struct Part {
  char name[20];
  int qty;
  double price;
};

int main() {
  Part a; 
  fstream f("records.dat", ios::in | ios::binary);
  if (f) {
		long distance = 2*sizeof(Part);
		f.seekg(distance, ios::beg);
		f.read(reinterpret_cast<char*>(&a), sizeof(Part));
		f.close();
		cout << "Part name: " << a.name << "\n";
		cout << "Party qty: " << a.qty << "\n";
		cout << "Part price: " << a.price << "\n";
  }
}
