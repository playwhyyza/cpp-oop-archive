#include <iostream>
using namespace std;
float myfunc(char ch) throw (int); // only int

int myfunc(int i) throw(); // no exceptions allowed

int myfunc(int i); // all exception allowed