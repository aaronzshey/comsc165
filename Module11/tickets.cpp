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
    ticketCounter++;
    Node *newTicket, *someTicket;
    someTicket = nullptr;
    newTicket = new Node;
    newTicket->ticketNumber = ticketCounter;
    newTicket->next = nullptr;
    if (!frontOfLine) {
      frontOfLine = newTicket;
    } else {
      while (someTicket->next) {
        someTicket = someTicket->next;
      }
      someTicket->next = newTicket;
    }
  }

  int removeFromLine() {
    ticketCounter--;
    Node *tempTicket;
    tempTicket = nullptr;
    if (!frontOfLine) {
      return -1;
    } else if (!frontOfLine->next) {
      tempTicket = frontOfLine;
      delete frontOfLine;
      return tempTicket->ticketNumber;
      delete tempTicket;
    } else {
      tempTicket = frontOfLine;
      frontOfLine = frontOfLine->next;
      delete tempTicket;
      return frontOfLine->ticketNumber;
    }
  }
  int lengthOfLine() {
    return ticketCounter;
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
  for (int i = 0; i < 4; i++) {
    line.addToLine();
  }

  for (int i = 0; i < 5; i++) {
    cout << "Now serving: " << i << "\n";
    line.removeFromLine();
    cout << "Number of people in line: " << line.lengthOfLine() << "\n";
  }

}
