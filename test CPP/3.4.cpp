#include <iostream>
using namespace std;
class MyIntArray
{
	int x;
	int *a;
	public:
		MyIntArray()
		{
			x = 0;
			a = 0;
		}
		MyIntArray(int y)
		{
			set(y);
		}
		~MyIntArray()
		{
			delete [] a;
			cout<<"bye bye\n";
		}
		void set(int y)
		{
			x = y;
			a = new int[x];
		}
		void getA();
		void showA();
		void reverse();
};
void MyIntArray::getA()
{
	cout<<"Enter values"<<endl;
	for(int i=0; i<x; i++)
	{
		cout<<"a["<<i<<"]";
		cin>>a[i];
	}
}
void MyIntArray::showA()
{
	cout<<"Show values"<<endl;
	for(int i=0; i<x; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
void MyIntArray::reverse()
{
	int temp;
	for(int i=0; i<x/2; i++)
	{
		temp = a[i];
		a[i] = a[x-i-1];
		a[x-i-1] = temp;
	}
}
int main()
{
	MyIntArray t, s(3);
	s.getA();
	s.showA();
	s.reverse();
	cout<<"after reverse\n";
	s.showA();
}
