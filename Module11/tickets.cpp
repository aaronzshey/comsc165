#include <iostream>
using namespace std;
class Line {
private:
  struct Node {
    int ticketNumber;
    Node *next;
  };
  Node *frontOfLine;
  int ticketCounter;

public:
  Line() {
    frontOfLine = nullptr;
    ticketCounter = 1;
  }
  virtual ~Line() { clearLine(); }
  void addToLine() {
    Node *newTicket, *someTicket;
    newTicket = new Node;
    newTicket->ticketNumber = ticketCounter;
    newTicket->next = nullptr;
    if (!frontOfLine) {
      frontOfLine = newTicket;
    } else {
      someTicket = frontOfLine;
    }
    while (someTicket->next) {
      someTicket = someTicket->next;
      someTicket->next = newTicket;
    }
  }

  int removeFromLine() {
    Node *someTicket, previousTicket;
    if (!frontOfLine) {
      return -1;
    } else {
      return frontOfLine->ticketNumber;
      someTicket = frontOfLine->next;
      delete frontOfLine;
      frontOfLine = someTicket;
    }
  }

  int lengthOfLine() {
    Node *i = frontOfLine;
    int j = 0;
    while (i != nullptr) {
      j += 1;
    }
    return j;
  }
  void clearLine() {
    Node *temp = nullptr;
    while (frontOfLine != nullptr) {
      temp = frontOfLine;
      frontOfLine = temp->next;
      delete temp;
    }
  }
};
int main() {
  Line line;
  for (int i = 0; i < 5; i++) {
    line.addToLine();
  }
  for (int i = 0; i < 5; i++) {
    cout << "Now serving: " << i << "\n";
    cout << "Number of people in line: " << line.lengthOfLine();
  }
}
