#include <iostream>
using namespace std;
struct Monster {
  string name;
  int movement;
  float dps;
};
void print(const Monster &m) {
  cout << "name: " << m.name << endl
       << "movement: " << m.movement << "dps: " << m.dps << endl;
}
int main() {
  Monster m;
  m.name = "Orc";
  m.movement = 5;
  m.dps = 3.5;
  print(m);
}
