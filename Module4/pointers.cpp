#include <iostream>
using namespace std;

int *getSize();
int *makeArray(int*);
int *fillArray();
int *findAverage();
void print();

int main() {

}

int *getSize() {
int *radius;
radius = new int;
  cout << "Enter the radius for a circle: ";
  cin >> *radius;
  while (*radius <= 0) {
    cout << "Error - only positive values allowed.  Try again.\n";
    cout << "Enter the radius for a circle: ";
    cin >> *radius;
  }
	return radius;
}

int *makeArray(int *size) {
return new int[*size];
	
	
}

int *fillArray()
