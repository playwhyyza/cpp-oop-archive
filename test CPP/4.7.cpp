#include <iostream>
using namespace std;
class A{
	int a;
	int b;
	public:
		A()
		{
			a = b = 0;
		}
		A(int i)
		{
			a = i;
			b = ++i;
		}
		A &f(A &x)
		{
			return x;
		}
		void show()
		{
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};
int main()
{
	A n,m;
	n.f(m);
	m.show();
	n.f(m) = 5;
	m.show();
	n.show();
}
