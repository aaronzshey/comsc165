#include <iostream>
using namespace std;

void getRadius(double &);
void showArea(double);

int main() {
  double radius;
  getRadius(radius);
  showArea(radius);
  return 0;
}

void getRadius(double &r) {
  cout << "Enter the radius of your circle: ";
  cin >> r;
}

void showArea(double r) {
  double area;
  area = 3.14159 * r * r;
  cout << "The area of the circle is " << area;
}
