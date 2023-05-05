#include <iostream>
using namespace std;
class List {
private:
  struct Node {
    char c;
    Node *next;
  };
  Node *head;

public:
  List() { head = nullptr; }
  ~List() { clear(); }
  void clear() {
    Node *temp = nullptr;
    while (head != nullptr) {
      temp = head;
      head = temp->next;
      delete head;
    }
  }

  void print() const {
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->c << " "
           << "\n";
      temp = temp->next;
    }
  }

  void insert(char c) {
    Node *n, *p, *q;
    p = head;
    q = nullptr;
    n = new Node;
    n->c = c;
    n->next = nullptr;
    while (p != nullptr && p->c == c) {
      q = q->next;
      p = p->next;
    }
    if (q == nullptr) {
      n->next = head;
      head = n;
    } else {
      q->next = n;
      n->next = p;
    }
  }
};

int main() {
  // Create the List object.
  List list;

  // add a few characters to the list.
  list.insert('h');
  list.insert('e');
  list.insert('l');
  list.insert('l');
  list.insert('o');
  list.insert(' ');
  list.insert('w');
  list.insert('o');
  list.insert('r');
  list.insert('l');
  list.insert('d');

  // print the contents of the list by calling print
  list.print();

  // empty the list by calling clear
  list.clear();

  // print the contents of the list
  list.print();

  return 0;
}
