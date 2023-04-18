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
  Integer(const Integer &right) {
    i = new int;
    *i = *(right.i);
  }
  bool operator==(const Integer &right) {
    if (*i == *(right.i)) {
      return true;
    } else {
      return false;
    }
  }

  bool operator<(const Integer &right) {
    if (*i < *(right.i)) {
      return true;
    } else {
      return false;
    }
  }
  friend ostream &operator<<(ostream &, const Integer &);
};
ostream &operator<<(ostream &out, const Integer &right) {
  out << *(right.i);
  return out;
}
int main() {
  Integer a, b;
  // these semicolons
  a.set(99);
  b = a;
  cout << a.get() << "\n" << b.get() << "\n";
  if (a == b) {
    cout << "They are the same."
         << "\n";
  } else if (a < b) {
    cout << "a is less than b."
         << "\n";
  } else {
    cout << "a is greater than b."
         << "\n";
  }
}
