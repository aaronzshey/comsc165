#include <iostream>
using namespace std;

class Integer {
private:
  int *p;

public:
  Integer() {
    // no semicolon on above line
    p = new int;
    *p = 0;
  }
  Integer(int n) {
    p = new int;
    *p = n;
  }
  ~Integer() { delete p; };
  void setNum(int n) { *p = n; }
  int getNum() const { return *p; }
};

int main() {
  Integer i;
  cout << i.getNum() << endl;
  Integer j(4);
  cout << j.getNum() << endl;
  j.setNum(8);
  cout << j.getNum() << endl;
  return 0;
}
