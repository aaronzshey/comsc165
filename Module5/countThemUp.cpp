#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  cout << "Enter the name of a file: ";
  ifstream ii;
  string filename, fileCont;
  getline(cin, filename);
  ii.open(filename);
  if (ii.is_open()) {
    int numUpper = 0,
    numLower = 0,
		numDigit = 0,
    numPunct = 0;
    while (getline(ii, fileCont)) {
      const char *c = fileCont.c_str();
      for (int i = 0; c[i] != '\0'; i++) {
        if (isupper(c[i])) {
          numUpper++;
        } else if (islower(c[i])) {
          numLower++;
        } else if (isdigit(c[i])) {
          numDigit++;
        } else if (ispunct(c[i])) {
          numPunct++;
        } else {
        }
      }
    }
    cout << "Upper: " << numUpper << "\nLower: " << numLower
         << "\nDigits: " << numDigit << "\nPunctuation: " << numPunct << "\n";
  } else {
    cout << "Error. File not found.";
  }
}
