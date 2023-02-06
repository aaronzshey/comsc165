#include <iostream>
#include <string>
using namespace std;

int getRadius();
double showArea(int);


int main() {
int userRadius = getRadius();
cout << showArea(userRadius);
}

int getRadius() {
int value;
cin >> value;
return value;
}

double showArea(int radius) {
return pow(radius, 2) * M_PI;    
}
