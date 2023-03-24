#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;
struct Point {
  int x;
  int y;
};
void dumb(Point *a) { cout << a[0].x; }
int arrayToFile(string f, Point *a, int s) {
  fstream g(f, ios::binary | ios::out);
  if (g) {
    g.write(reinterpret_cast<char *>(&a), sizeof(&a));
    cout << "The coordinates from the source array are: \n";
    for (int i = 0; i < s; i++) {
      cout << "(" << a[i].x << ", " << a[i].y << ")"
           << "\n";
    }
    return 0;
  } else {
    return -1;
  }
}

int fileToArray(string f, Point *a, int s) {
  fstream g(f, ios::binary | ios::in);
  if (g) {
    g.read(reinterpret_cast<char *>(&a), sizeof(&a));
    cout << "The coordinates read from the file are: \n";
    for (int i = 0; i < s; i++) {
      cout << "(" << a[i].x << ", " << a[i].y << ")"
           << "\n";
    }
    return 0;
  } else {
    return -1;
  }
}

int main() {
  string fileName = "arrays.dat";
  const int SIZE = 4;
  Point ar[SIZE] = {{3, 2}, {4, 6}, {-1, 2}, {0, -5}};
  dumb(ar);
  arrayToFile(fileName, ar, SIZE);
  fileToArray(fileName, ar, SIZE);
}
