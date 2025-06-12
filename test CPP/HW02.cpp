#include <iostream>
#include <string.h>
using namespace std;
class Rectangle
{
	float wide;
	float length;
	char name[80];
	public:
		Rectangle()
		{
			wide = 0;
			length = 0;
			strcpy(name,"noname");
			cout<<name<<" Object is born"<<endl;
		}
		Rectangle(float x, float y,char* z)
		{
			wide = x;
			length = y;
			strcpy(name,z);
			cout<<name<<" Object is born"<<endl;
		}
		~Rectangle()
		{
			cout<<name<<" object is die"<<endl;
		}
		void set(float x, float y, char* z)
		{
			wide = x;
			length = y;
			strcpy(name,z);
		}
		float getWide()
		{
			return wide;
		}
		float getLength()
		{
			return length;
		}
		char* getName()
		{
			return name;
		}
		float area();
		float frame();
		void show();
};
float Rectangle::area()
{
	return wide * length;
}
float Rectangle::frame()
{
	return wide * 2 + length * 2;
}
void Rectangle::show()
{
	cout<<"wide = "<<wide<<"\nlength = "<<length<<"\nName is "<<name<<endl;
}
int main()
{
	Rectangle T1(6.0,8.0,"T1"), T2(4.0, 3.2,"T2");
	cout<<"==============="<<endl;
	T1.show();
	cout<<"wide = "<<T1.getWide()<<endl;
	cout<<"length = "<<T1.getLength()<<endl;
	cout<<"Area = "<<T1.area()<<endl;
	cout<<"Frame = "<<T1.frame()<<endl;
	cout<<"==============="<<endl;
	T1.set(4.0,2.0,"T1");
	T1.show();
	cout<<"Area = "<<T1.area()<<endl;
	cout<<"Frame = "<<T1.frame()<<endl;
	cout<<"==============="<<endl;
	T2.show();
	cout<<"Area = "<<T2.area()<<endl;
	cout<<"Frame = "<<T2.frame()<<endl;
}
