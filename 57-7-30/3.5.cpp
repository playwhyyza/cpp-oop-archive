#include <iostream>
using namespace std;
class MyObj
{
	private:
		int width;
		int height;
		float price;
	public:
		MyObj()
		{
			cout<<"my object\n";
		}
		~MyObj()
		{
			cout<<"bye bye\n";
		}
};
class MyObjArray
{
	MyObj *p;
	int num;
	void set(int n)
	{
		num = n;
		p = new MyObj[n];
	}
	public:
		MyObjArray()
		{
			set(0);
		}
		MyObjArray(int n)
		{
			set(n);
		}
		~MyObjArray()
		{
			delete [] p;
		}
};
int main()
{
	MyObjArray a;
	MyObjArray b(3);
	MyObjArray c(0);
}
