#include <iostream>
using namespace std;
class Integers {
private:
  int *p, *q;

public:
  Integers() {
    p = new int;
    *p = 0;
    q = new int;
    *q = 0;
  }

  Integers(const Integers &rhs) {
    *p = *(rhs.p);
    *q = *(rhs.q);
  }
  ~Integers() {
    delete p;
    delete q;
  }
  void setP(int num) { *p = num; }
  void setQ(int num) { *q = num; }
  int getP() const { return *p; }
  int getQ() const { return *q; }

  bool operator<(const Integers &rhs) {
    if ((*p + *q) < (*(rhs.p) + *(rhs.q))) {
      return true;
    } else {
      return false;
    }
  }
  bool operator==(const Integers &rhs) {
    if ((*p + *q) == (*(rhs.p) + *(rhs.q))) {
      return true;
    } else {
      return false;
    }
  }
  Integers &operator=(const Integers &rhs) {
    if (this != &rhs) {
      *p = *(rhs.p);
    }
    return *this;
  }
  Integers operator++(int) {
		Integers temp;
		temp.setP(*p);
		temp.setQ(*q);
    *p += 2;
    *q += 2;
    return temp;
  }
  friend ostream& operator<<(ostream &o, const Integers &rhs) {
    o << "[" << *(rhs.p) << "," << *(rhs.q) << "]"
      << "\n";
    return o;
  }
};

int main() {

  Integers a, b;

  a.setP(8);
  a.setQ(6);
  b.setP(7);
  b.setQ(5);
  cout << "Object A: " << a;
  cout << "Object B: " << b;
  if (a < b)
    cout << "a < b"
         << "\n";
  else
    cout << "a >= b"
         << "\n";

  if (a == b)
    cout << "a == b"
         << "\n";
  else
    cout << "a != b"
         << "\n";

  Integers c(a++);

  cout << "Object A: " << a;
  cout << "Object B: " << b;
  cout << "Object C: " << c;

  cin.ignore();
  cin.get();

  return 0;
}
