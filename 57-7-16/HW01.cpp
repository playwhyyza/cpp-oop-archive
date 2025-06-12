#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class Point
{
	float x;
	float y;
	char name[10];
	public:
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
};
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
	Point a;
	a.set(2.0, 3.0, "mypoint");
	a.show();
	cout<<"X = "<<a.getX()<<endl;
	cout<<"Y = "<<a.getY()<<endl;
	cout<<"Distance = "<<a.distance()<<endl;
	cout<<"Name is "<<a.getName()<<endl;
}
