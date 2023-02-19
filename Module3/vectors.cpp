#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void load(vector<double> &, string = "numbers.txt");
double findHighest(const vector<double> &);
double findAverage(const vector<double> &);
void sort(vector<double> &);
void print(const vector<double> &, double, double);

int main() {

  vector<double> vec;
  load(vec);
  sort(vec);
  print(vec, findHighest(vec), findAverage(vec));
}

void load(vector<double> &vec, string filename) {
  double fileData;
  ifstream input;
  input.open(filename);
  if (input.is_open()) {
    while (input >> fileData) {
      vec.push_back(fileData);
    }
    input.close();
  } else {
    cout << "Error: file " << filename << " not found.\n";
  }
}
double findHighest(const vector<double> &vec) {
  double highest = vec[0];
  for (double i : vec) {
    if (i > highest) {
      highest = i;
    }
  }
  return highest;
}
double findAverage(const vector<double> &vec) {
  double sum;
  for (double i : vec)
    sum += i;
  return (sum / vec.size());
}
void sort(vector<double> &vec) {
  for (int i = 0; i < vec.size() - 1; i++) {
    int index = i;
    int minIndex = i;
    double minValue = vec[i];
    for (int j = i + 1; j < vec.size(); j++) {
      if (vec[j] < minValue) {
        minValue = vec[j];

        minIndex = j;
      }
    }
    vec[minIndex] = vec[i];
    vec[i] = minValue;
  }
}

void print(const vector<double> &vec, double high, double average) {
  cout << "The sorted numbers:\n";
  for (double i : vec) {
    cout << i << " ";
  }
  cout << "\n";
  cout << "High number: " << high << "\n";
  cout << "Average number: " << average << "\n";
}
