#include <iostream>
using namespace std;
class MyObj
{
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
		void set(int w, int h, float p)
		{
			width = w;
			height = h;
			price = p;
		}
};
int main()
{
	MyObj *t;
	cout<<"hello\n";
	MyObj *p = new MyObj;
	p->set(4, 10, 980.0);
	(*p).set(5, 10, 12000.0);
	delete p;
}
