#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string filename;
  int numFromFile;
  ifstream input;
  cout << "Enter the name of the file to access to: ";
  getline(cin, filename);
  input.open(filename.c_str());
  if (input.is_open()) {
    while (input >> numFromFile) {
      for (int i = 0; i < numFromFile; i++) {
        cout << "#";
      }
      cout << " " << numFromFile << "\n";
    }
    input.close();
  } else
    cout << "The file " << filename << "does not exist.\n";
}
