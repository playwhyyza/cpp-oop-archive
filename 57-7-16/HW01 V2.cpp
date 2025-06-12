#include <iostream>
#include <math.h>
using namespace std;
class Point
{
	float x;
	float y;
	char name[80];
	public:
		void set(float a, float b, char z[80])
		{
			x = a;
			y = b;
			for(int i=0; z[i]; i++)
				name[i] = z[i];
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
	Point a,b;
	a.set(2.0, 3.0, "mypoint");
	a.show();
	cout<<"X = "<<a.getX()<<endl;
	cout<<"Y = "<<a.getY()<<endl;
	cout<<"Distance = "<<a.distance()<<endl;
	cout<<"Name is "<<a.getName()<<endl;
	
	float q,w;
	char e[80];
	cout<<"\ninput x : ";
	cin>>q;
	cout<<"input y : ";
	cin>>w;
	cout<<"input name : ";
	cin>>e;
	b.set(q,w,e);
	b.show();
	cout<<"X = "<<b.getX()<<endl;
	cout<<"Y = "<<b.getY()<<endl;
	cout<<"Distance = "<<b.distance()<<endl;
	cout<<"Name is "<<b.getName()<<endl;
}

