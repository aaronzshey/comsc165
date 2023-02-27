#include <iostream>
using namespace std;

int *getSize();
int *makeArray(int *);
void fillArray(int *, int *);
float *findAverage(int *, int *);
void print(int *, int *, float *);

int main() {
  int *size = getSize(); //* tells cpp to find the value located at the memory
                         // address returned by getSize;
  int *arr = makeArray(size);
  //* not needed on rvalue because lvalue is also a pointer
  //*arr = *fillArray(arr, size);
	fillArray(arr, size);
	float *average = findAverage(arr, size);
  print(arr, size, average);
	delete[] arr;
	delete size;
	delete average;
	
}

int *getSize() {
  int *radius;
  radius = new int;
  cout << "Enter the number of integers you want to average: ";
  cin >> *radius;
  while (*radius <= 0) {
    cout << "Error - only positive values allowed.  Try again.\n";
    cout << "Enter the number of integers you want to average:";
    cin >> *radius;
  }
  return radius;
}

int *makeArray(int *size) {
  int *a;
  a = new int[*size];
  return a;
}

void fillArray(int *arr, int *size) {

  for (int i = 0; i < *size; i++) {

    int in;
    cout << "Enter #" << i + 1 << ": ";
    cin >> in;
    *(arr + i) = in;
  }
  //return arr;
};

float *findAverage(int *arr, int *size) {
  float *a;
  a = new float;

  for (int i = 0; i < *size; i++) {

    *a += *(arr + i);
  }
  *a /= *size;
  return a;
}

void print(int *arr, int *size, float *average) {
  cout << "Array contents: ";

  for (int i = 0; i < *size; i++) {
    cout << *(arr + i) << " ";
  }

  cout << "\nAverage: " << *average;
}
