#include <iostream>
using namespace std;
void f(int a) // a is a parameter
{
	cout<<a<<endl;
}
int main()
{
	int i = 5;
	f(10); // 10 is an argument
	f(i); // i is an argument
}
