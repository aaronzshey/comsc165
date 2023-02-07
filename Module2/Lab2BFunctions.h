#ifndef FUNCTIONS_H
#define FUNCTIONS_H 

int bar(int a) { return a * 1.5; }

void foo(int &a) { a = bar(a); }

int spam(int a, int &b) {
  float c = a * .5;
  b = a * 3;
  return c;
}

void eggs(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}

void bacon(int a) { a = 0; }

void ham(int &a, int b) {
  static int c;

  a += c;
  b += c++;
}
#endif
