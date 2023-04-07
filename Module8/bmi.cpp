#include <iostream>
using namespace std;
class BMI {
private:
  double height, weight;

public:
  BMI() {
    double weight = 0;
    double height = 0;
  }
  BMI(double w, double h) {
    weight = w;
    height = h;
  }
  void setWeight(double w) { weight = w; }
  void setHeight(double h) { height = h; }
  double getWeight() const { return weight; }
  double getHeight() const { return height; }
  double getBMI() const { return (703.0 * weight) / (height * height); }
  string getClass() const;
};
int main() {
  double height, weight;
  cout << "Enter your height in inches: ";
  cin >> height;
  cout << "Enter your weight in pounds: ";
  cin >> weight;
  cout << "Your height: " << height << "\n";
  cout << "Your weight: " << weight << "\n";
  BMI user(weight, height);

  cout << "Your BMI is: " << user.getBMI() << "\n";
  cout << "Your weight class: " << user.getClass() << "\n";
}

string BMI::getClass() const {
  double bmi = (703.0 * weight) / (height * height);
  if (bmi > 25.0) {
    return "obese";
  } else if (bmi < 25.0 && bmi > 18.5) {
    return "optimal";
  } else {
    return "underweight";
  }
}
