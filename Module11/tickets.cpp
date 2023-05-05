#include <iostream>
using namespace std;
class Line {
private:
  struct Node {
    int ticketNumber;
    Node *next;
  };
  Node *frontOfLine;

public:
Line() { }
~Line() {}
void addToLine() const {}
int removeFromLine() {}
int lengthOfLine() {}
void clearLine() const {}	

};
int main() {}
