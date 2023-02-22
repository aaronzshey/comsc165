#include <iostream>
#include <memory>
using namespace std;

int main() {
	unique_ptr<int> num1(new int);	
	unique_ptr<int> num2(new int);	
	unique_ptr<int> num3(new int);	
	unique_ptr<int> sum(new int);	
	unique_ptr<double> average(new double);	

	cout << "Enter the first number: ";
	cin >> *num1;
	cout << "Enter the second number: ";
	cin >> *num2;
	cout << "Enter the third number: ";
	cin >> *num3;

	*sum = *num1 + *num2 + *num3;

	*average = *sum / 3;
	
	cout << "The total is " << *sum << ".\n";
	cout << "The average is " << *average << ".\n";
}

