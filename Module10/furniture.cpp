#include <iostream>
using namespace std;
class Furniture {
protected:
  string name;
  string color;

public:
  Furniture(string n, string c) {
    name = n;
    color = c;
  }
  void setName(string n) { name = n; }
  void setColor(string c) { color = c; }
  string getName() const { return name; }
  string getColor() const { return color; }
  virtual void print() {
    cout << "Name: " << name << ", Color: " << color << "\n";
  }
};

class Recliner : public Furniture {
private:
  double position;

public:
  Recliner(string n, string c, double p) : Furniture(n, c) { position = p; }
  void setPosition(double p) { position = p; }
  double getPosition() const { return position; }
  void print() {
    cout << "Name: " << name << ", Position: " << position << "\n";
  }
};
class Bed : public Furniture {
private:
  double length;
  double width;

public:
  Bed(string n, string c, double l, double w) : Furniture(n, c) {
    length = l;
    width = w;
  }
  void setLength(double l) { length = l; }
  void setWidth(double w) { width = w; }
  int getLength() const { return length; }
  int getWidth() const { return width; }
  void print() {
    cout << "Name: " << name << ", Length: " << length << ", Width: " << width
         << "\n";
  }
};
int main() {
  Furniture *first = new Furniture("Generic Piece", "Brown");
  Furniture *second = new Recliner("Recliner", "Purple", 45.5);
  Furniture *third = new Bed("Bed", "Purple", 36.5, 75.9);
  Furniture *things[3] = {first, second, third};
  for (int i = 0; i < 3; i++) {
    things[i]->print();
  }
}
