#include <iostream>
using namespace std;

void getRadius(double &);
void findArea(double);
void findDiameter(double);
void findCircumference(double);
void print(double);

int main() {
  double radius;
	getRadius(radius);
  print(radius);
}

void getRadius(double &radius) {
  do {
    cout << "Enter the radius for a circle: ";
    cin >> radius;
    if (radius <= 0) {
      cout << "Error - only positive values allowed.  Try again.\n";
      continue;
    } else
      cout << "Circle radius: " << radius << "\n";
    break;
  } while (true);
}
void findArea(double radius) {
  double area = 3.14159 * radius * radius;
  cout << "Circle area: " << area << "\n";
}
void findDiameter(double radius) {
  double diameter = 2 * radius;
  cout << "Circle diameter: " << diameter << "\n";
}
void findCircumference(double radius) {
  double circumference = 2 * 3.14159 * radius;
  cout << "Circle circumference: " << circumference << "\n";
}
void print(double input) {
  findArea(input);
  findDiameter(input);
  findCircumference(input);
}
