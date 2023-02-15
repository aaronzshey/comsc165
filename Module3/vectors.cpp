#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void load(vector<double> &, string = "numbers.txt");
double findHighest(const vector<double> &);
double findAverage(const vector<double> &);
void sort(vector<double> &);
void print(const vector<double> &);

int main() {
string filename;
cout << "Enter a file name: ";
getline(cin, filename);

vector<double> vec;
load(vec);


}

void load(vector<double> &input, string = "numbers.txt") {
				
}
double findHighest(const vector<double> &vec) {
return vec[vec.size()];
}
double findAverage(const vector<double> &vec) {
return vec[0];
}
void sort(vector<double> &);
void print(const vector<double> &);

