#include <fstream>
#include <iostream>
using namespace std;
int Question59(string name, char *arr, int length) {
  fstream f;
  f.open(name, ios::out | ios::binary);
  if (f.is_open()) {
    f.write(arr, length);
    return 0;
  } else {
    return -1;
  }
}
class Float {
private:
  float v;

public:
  Float() { v = 0.0; }
  Float(float param) { v = param; }
  void setFloat(float param) { v = param; }
  float getFloat() { return v; }
};

int main() {
  char mock[3] = {'a', 'b', 'c'};
  Question59("test.dat", mock, 3);
  Float a(1.1);
  cout << a.getFloat();
  a.setFloat(2.2);
  cout << a.getFloat();
}
