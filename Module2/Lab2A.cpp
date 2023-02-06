// Example program
#include <iostream>
#include <string>
using namespace std;
void getRadius(double&);
void showArea(double);

int main() {

double radius;
getRadius(radius);
showArea(radius);
}

void getRadius(double& r) {

cout << "Enter the radius of your circle: ";
cin >> r;

}

void showArea(double r) {    
double area;
area = M_PI * pow(r,2);
cout << "The area of the circle is " << area;
}
