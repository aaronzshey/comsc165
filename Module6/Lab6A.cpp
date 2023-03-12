#include <iostream>
using namespace std;
struct Monster {
  string name;
  int movement;
  float dps;
};
int main() {
  Monster m;
  m.name = "Orc";
  m.movement = 5;
  m.dps = 3.5;
  cout << "Monster name: " << m.name << endl;
  cout << "Monster movement: " << m.movement << endl;
  cout << "Monster dps: " << m.dps << endl;
}
