#include <iostream>
using namespace std;

void getRadius(double &);
double findArea(double);
double findDiameter(double);
double findCircumference(double);
void print(double = 1.0);

int main() {
  double radius;
  getRadius(radius);
  print(radius);
}

void getRadius(double &radius) {
  cout << "Enter the radius for a circle: ";
  cin >> radius;
  while (radius <= 0) {
    cout << "Error - only positive values allowed.  Try again.\n";
    cout << "Enter the radius for a circle: ";
    cin >> radius;
  }
}
double findArea(double radius) { return 3.14159 * radius * radius; }
double findDiameter(double radius) { return 2 * radius; }
double findCircumference(double radius) { return 2 * 3.14159 * radius; }
void print(double input) {
  cout << "Circle radius: " << input << "\n";
  cout << "Circle area: " << findArea(input) << "\n";
  cout << "Circle diameter: " << findDiameter(input) << "\n";
  cout << "Circle circumference: " << findCircumference(input) << "\n";
}
