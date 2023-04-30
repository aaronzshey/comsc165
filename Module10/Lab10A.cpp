#include <iostream>
using namespace std;
class Foo {
protected:
  int x, y;

public:
  Foo() {
    x = 0;
    y = 0;
  }
  Foo(int a, int b) {
    x = a;
    y = b;
  }
  void setX(int a) { x = a; }
  void setY(int b) { y = b; }
  int getX() const { return x; }
  int getY() const { return y; }
};
class Bar : public Foo {
private:
  int z;

public:
  Bar(int a, int b, int c) : Foo(a, b) { z = c; }
  void setZ(int c) { z = c; }
  int getZ() const { return z; }
  double getAverage() const {
    double sum, average;
    sum = x + y + z;
    average = sum / 3;
    return average;
  }
  int getSum() const {
    int sum;
    sum = x + y + z;
    return sum;
  }
};

int main() {
  Bar b(8, 6, 5);
  cout << "Average: " << b.getAverage() << "\n"
       << "Sum: " << b.getSum();
}
