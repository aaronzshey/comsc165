#include <iostream>
using namespace std;

int *getSize();
int *makeArray();


int main() {
	
}

int *getSize() {
  cout << "Enter the radius for a circle: ";
  cin >> radius;
  while (radius <= 0) {
    cout << "Error - only positive values allowed.  Try again.\n";
    cout << "Enter the radius for a circle: ";
    cin >> radius;
  }
}
