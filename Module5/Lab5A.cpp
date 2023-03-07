#include <iostream>
using namespace std;
int mystrlen(const char *);
int main() {
  const int SIZE = 14;
  char str[SIZE];
  cout << "Enter a string: ";
  cin.getline(str, SIZE - 1);
  int length = mystrlen(str);
  cout << "The string you entered contains " << length << " character(s)."
       << endl;
}

int mystrlen(const char *s) {
  int counter = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    counter++;
  }
  return counter;
}
