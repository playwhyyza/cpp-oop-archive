#include <iostream>
#include <string.h>
using namespace std;
class Rectangle
{
	float wide;
	float length;
	public:
		Rectangle()
		{
			wide = 0;
			length = 0;
			//cout<<" Object is born"<<endl;
		}
		Rectangle(float x, float y)
		{
			wide = x;
			length = y;
			//cout<<" Object is born"<<endl;
		}
		~Rectangle()
		{
			//cout<<" object is die"<<endl;
		}
		void set(float x, float y)
		{
			wide = x;
			length = y;
		}
		float getWide()
		{
			return wide;
		}
		float getLength()
		{
			return length;
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
	cout<<"wide = "<<wide<<"\tlength = "<<length<<"\narea = "<<area()<<"\tframe = "<<frame()<<endl;
}
//////////////////////////////////////////////////////////////
class MyRect{
	int row, col;
	Rectangle **a;
	public:
		MyRect()
		{
			row = 0;
			col = 0;
		}
		MyRect(int r, int c);
		~MyRect();
		void reset(int r, int c);
		void setRect();
		Rectangle getRect(int r, int c);
		void show();
};
MyRect::MyRect(int r, int c)
{
	row = r;
	col = c;
	a = new Rectangle*[row]; // set up row
	for(int i=0; i<row; i++)
		a[i] = new Rectangle[col]; // set up column
}
MyRect::~MyRect()
{
	if(a!=0)
	{
		for(int i=0; i<row; i++)
			delete [] a[i]; // delete column
		delete [] a; // delete row
	}
}
void MyRect::reset(int r, int c)
{
	if(a != 0)
	{
		for(int i=0; i<row; i++)
			delete [] a[i]; // delete column
		delete [] a; // delete row
	}
	row = r;
	col = c;
	a = new Rectangle*[row];
	for(int i=0; i<row; i++)
		a[i] = new Rectangle[col];
}
void MyRect::setRect()
{
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
		{
			float x,y;
			cout<<"Input x and y in a["<<i<<"]["<<j<<"] = "; // input value in Rectangle
			cin>>x>>y;
			a[i][j].set(x,y);
		}
}
 Rectangle MyRect::getRect(int r, int c)
{
	return a[r][c];
}
void MyRect::show()
{
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] ";
			a[i][j].show();
		}	
}
int main()
{
	MyRect s(5,3);
	s.reset(3,2);
	s.setRect();
	cout<<"///////////////////////////////////////////"<<endl;
	s.getRect(2,1).show();
	cout<<"///////////////////////////////////////////"<<endl;
	s.show();
}
