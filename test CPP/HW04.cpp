#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class Point
{
	float x;
	float y;
	char name[80];
	static int num;
	public:
		Point()
		{
			x = 0;
			y = 0;
			strcpy(name,"noname");
			num++;
		}
		Point(float a, float b, char* n)
		{
			x = a;
			y = b;
			strcpy(name,n);
			num++;
		}
		~Point()
		{
			num--;
			cout<<name<<" object is die"<<endl;
			cout<<"Total object = "<<Point::count()<<endl;
		}
		void set(float a, float b, char *z)
		{
			x = a;
			y = b;
			strcpy(name,z);
		}
		void show(void);
		float getX()
		{
			return x; 
		}
		float getY()
		{
			return y;
		}
		float distance(void);
		char* getName()
		{
			return name;
		}
		float dot(Point &k)
		{
			return (x * k.x) + (y * k.y);
		}
		Point midpoint(Point &k, Point &j)
		{
			Point c((j.x + k.x) / 2,(j.y + k.y) / 2,"midpoint");
			return c;
		}
		static int count()
		{
			return num;
		}
};
int Point::num;
void Point::show()
{
	cout<<"Point name is "<<name<<" x = "<<x<<" y = "<<y<<endl;
}
float Point::distance()
{
	float x2 = 0.0, y2 = 0.0;
	return sqrt(pow((x2 - x),2) + pow((y2 - y),2));
}
int main()
{	
	Point q(2,9,"Q"), w(6,8,"W");
	cout<<"dot = "<<q.dot(w)<<endl;
	Point e(0,0,"E");
	e = e.midpoint(q,w);
	cout<<e.getName()<<" = ("<<e.getX()<<","<<e.getY()<<")"<<endl;
	cout<<"Total object = "<<Point::count()<<endl;
}
