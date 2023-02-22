#include <iostream>
using namespace std;

int main() {
  int size;
  int *numbers, *sum;

  cout << "How many integers do you want to sum? ";
  cin >> size;

  numbers = new int[size];
  sum = new int;
	
  *sum = 0;

  for (int i = 0; i < size; i++) {
    cout << "Enter an integer: ";
    cin >> numbers[i];
  }

  for (int i = 0; i < size; i++) {
    *sum = *sum + *(numbers + i);
  }

  cout << "Sum: " << *sum << "\n";

  delete[] numbers;
  delete sum;
}
