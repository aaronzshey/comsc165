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

  void print(Node *h) const;

public:
  Line() : ticketCounter(1), frontOfLine(nullptr) {}
  virtual ~Line() { clearLine(); }

  void addToLine();
  int removeFromLine();
  int lengthOfLine() const;
  void clearLine();
  void print() const;
};

int main() {
  // create a line object
  Line l;

  // add 5 to the line
  for (int i = 0; i < 5; i++)
    l.addToLine();
  cout << "Tickets in line: ";
  l.print();
  // while there are people in line
  while (l.lengthOfLine() != 0) {
    // remove the first from the line and display the ticket number
    cout << "Now Serving: " << l.removeFromLine() << "\n";

    // display the number in line
    cout << "Number of people in line: " << l.lengthOfLine() << "\n";
  }

  return 0;
}

void Line::addToLine() {
  // create the new node
  Node *temp = new Node{ticketCounter++, nullptr};

  // if the list is empty, add the node to the front of the list
  if (frontOfLine == nullptr)
    frontOfLine = temp;
  // otherwise...
  else {
    // find the last node in the list
    Node *p = frontOfLine;

    while (p->next != nullptr)
      p = p->next;

    // then add the node to the end of the list
    p->next = temp;
  }
}

int Line::removeFromLine() {
  int valueToReturn = -1;

  // if there is a node in the list
  if (frontOfLine != nullptr) {
    // store the ticketNumber in vtr
    valueToReturn = frontOfLine->ticketNumber;

    // point temporary pointer p at the "head" node
    Node *p = frontOfLine;

    // advance the "head" pointer to the next node in the list
    frontOfLine = frontOfLine->next;

    // delete the former "head" node
    delete p;
  }

  // return the contents of vtr
  return valueToReturn;
}

void Line::clearLine() {
  // while the "head" pointer is pointing at a node...
  while (frontOfLine != nullptr) {
    // point temporary pointer p at the head node
    Node *p = frontOfLine;

    // advance the "head" pointer to the next node in line
    frontOfLine = frontOfLine->next;

    // delete the "former head" node.
    delete p;
  }
}

int Line::lengthOfLine() const {
  // initialize a counter to 0
  int lineLength = 0;

  // create a temporary pointer to point to the front of the line
  Node *p = frontOfLine;

  // while that pointer is pointing to a node...
  while (p) {
    // increment the counter
    lineLength++;
    // move the temporary pointer to the next node in the list
    p = p->next;
  }

  // return the counter
  return lineLength;
}

void Line::print(Node *h) const {

  if (h != nullptr) {
    cout << h->ticketNumber << " ";
    print(h->next);
  } else {
    cout << "\n";
    return;
  }
}

void Line::print() const { Line::print(frontOfLine); }
