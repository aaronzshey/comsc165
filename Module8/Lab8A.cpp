#include <iostream>
#include <string>
using namespace std;

class Customer {
private: // this colon
  string name, phone;
public:
  void setName(string);
  string getName() const;
  void setPhone(string p) { phone = p; }
  string getPhone() const { return phone; }
};

int main() {
  Customer c;
  c.setName("John Doe");
  c.setPhone("555-1234");
  cout << "Name: " << c.getName() << "\n";
  cout << "Phone: " << c.getPhone() << "\n";
  return 0;
}
void Customer::setName(string n) { name = n; }
string Customer::getName() const { return name; }
