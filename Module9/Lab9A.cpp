#include <iostream>
using namespace std;

class Integer {
private:
  int *i;

public:
  Integer() {
    i = new int;
    *i = 0;
  }
  ~Integer() { delete i; }
  void set(int j) { *i = j; }
  int get() const { return *i; }
  Integer &operator=(const Integer &right) {
    if (this != &right) {
      *i = *(right.i);
      return *this;
    }
  }
};

int main() {
  Integer a, b;
  // these semicolons
  a.set(99);
  b = a;
  cout << a.get() << "\n" << b.get() << "\n";
}
