#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int countit(const char *);

int main() {
  string line;
  cout << "Enter a string: ";
  getline(cin, line);
  cout << countit(line.c_str());
}

int countit(const char *s) {
  int counter = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (isalnum(s[i])) {
      counter++;
    }
  }
  return counter;
}
