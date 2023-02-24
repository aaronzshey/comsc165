#include "Module3/Module3Functions.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int *f(int *s) {
	cout << *s;
  int *a;
  return a;
}

int main() {
  int *p;
  p = new int;
  *p = 5;
	
	int q = *f(*p);

	q[0]=0;
	q[1]=1;
	
	
  cout << "Hello World"
       << "\n";
  vector<int> v;
  ifstream i;
  i.open("a");
  int o;
  while (i >> o)
    v.push_back(o);

  i.close();
  cout << v[0] << "asdf";
  printVec(v);
}
