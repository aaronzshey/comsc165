#include "Module3/Module3Functions.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
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
