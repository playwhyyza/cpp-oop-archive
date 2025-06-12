#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class Circle;
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
		Point(int a, int b, char* n)
		{
			x = a;
			y = b;
			strcpy(name,n);
			num++;
		}
		~Point()
		{
			//delete
			//cout<<name<<" object is die"<<endl;
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
			return (x + k.x) * (y + k.y);
		}
		void midpoint(Point &k, Point &j)
		{
			cout<<"x = "<<((j.x + k.x) / 2)<<" y = "<<((j.y + k.y) / 2)<<endl;
		}
		static int count()
		{
			return num;
		}
		friend void check(Point &, Circle &);
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
////////////////////////////////////////////////////////////////////
class Circle{
	float radius;
	Point center;
	public:
		Circle()
		{
			radius = 0;
			center.set(0,0,"noname");
		}
		Circle(float j, Point &k)
		{
			radius = j;
			center.set(k.getX(),k.getY(),k.getName());
		}
		~Circle()
		{
			//delete
		}
		void set(float j, float k, float l, char *z)
		{
			radius = j;
			center.set(k,l,z);
		}
		float getRadius()
		{
			return radius;
		}
		float getX()
		{
			return center.getX();
		}
		float getY()
		{
			return center.getY();
		}
		char* getName()
		{
			return center.getName();
		}
		void show()
		{
			cout<<"radius = "<<radius<<endl;
			cout<<"center = ("<<center.getX()<<","<<center.getY()<<")"<<endl;
		}
		friend void check(Point &, Circle&);
};
void check(Point &j, Circle &k)
{
	//cout<<"Point of x = "<<j.x<<endl;
	//cout<<"Point of y = "<<j.y<<endl;
	//cout<<"Circle of h = "<<k.center.getX()<<endl;
	//cout<<"Circle of k = "<<k.center.getY()<<endl;
	//cout<<"Circle of radius = "<<k.radius<<endl;
	float n = pow(j.x - k.center.x,2) + pow(j.y - k.center.y,2);
	//cout<<"result = "<<n<<endl;
	cout<<"radius pow 2 = "<<pow(k.radius,2)<<endl;
	float r = pow(k.radius,2);
	if(n > r)
		cout<<"Point is outside of circle"<<endl;
	else if(n == r)
		cout<<"Point is on top of circle"<<endl;
	else
		cout<<"Point is inside of circle"<<endl;
}
int main()
{	
	Point t(2,4,"T"), p(2,2,"P");
	Circle u(2,p);
	check(t,u);
	u.show();
}
