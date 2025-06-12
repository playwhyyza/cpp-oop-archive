#include <iostream>
using namespace std;
int main()
{
	int n = 5;
	int &r=n;
	cout<<"n = "<<n<<" r = "<<r<<endl;
	if(&r == &n)
		cout<<"Hello"<<endl;
}
