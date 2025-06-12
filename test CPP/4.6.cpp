#include <iostream>
using namespace std;
class X{
	int a;
	public:
		int &f1(int i)
		{
			a = ++i;
			return a;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
		}
};
int main()
{
	X n;
	n.f1(5) = 2;
	n.show();
}
