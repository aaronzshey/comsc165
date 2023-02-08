#include<iostream>
using namespace std;

void getRadius(double&);
void findArea(double);
void findDiameter(double);
void findCircumference(double);
void print(float);


int main() {
    double radius;
    print(radius);
}

void getRadius(double& radius) {
    cout << "Enter the radius of a circle: ";
while (true) {
    cin >> radius;
    if (radius < 0) {
        cout << "Error: only positive values allowed. Try again.\n";
        cout << "Enter the radius of a circle: ";
        cin >> radius;
    } else break;
    
} 

}
void findArea(double radius) {
    double area = 3.14159 * radius * radius;
    cout << "Circle area: " << area << "\n";
}
void findDiameter(double radius) {
    double diameter =  2 * radius;
    cout << "Circle diameter: " << diameter << "\n";
}
void findCircumference(double radius) {
    double circumference = 2 * 3.14159 * radius;
    cout << "The circumference is: " << circumference << "\n";
}
void print(float input) {
    double input;
    getRadius(input);
    findArea(input);
    findCircumference(input);
}
