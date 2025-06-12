#include <iostream>
#include <math.h>
using namespace std;
class Shape{
	float area;
	public:
		Shape(){
			//cout<<"I am Shpae"<<endl;
		}
		virtual ~Shape(){
			cout<<"bye Shape"<<endl;
		}
		void setArea(float n){
			area = n;
		}
		float getArea(){
			return area;
		}
		virtual float cal()=0;
		virtual void show()=0;
};
class Rectangle: public Shape{
	float wide,lenght;
	public:
		Rectangle(){
			setRectangle(0,0);
		}
		Rectangle(float a, float b){
			setRectangle(a,b);
		}
		~Rectangle(){
			cout<<"bye Rectangle"<<endl;
		}
		void setRectangle(float a, float b){
			wide = a;
			lenght = b;
		}
		float cal(){
			setArea(wide*wide);
			return getArea();
		}
		void show(){
			cout<<"Rectangle area = "<<getArea()<<endl;
		}
};
class Triangle: public Shape{
	float base,high;
	public:
		Triangle(){
			setTriangle(0,0);
		}
		Triangle(float a, float b){
			setTriangle(a,b);
		}
		~Triangle(){
			cout<<"bye Triangle"<<endl;
		}
		void setTriangle(float a, float b){
			base = a;
			high = b;
		}
		float cal(){
			setArea(0.5 * base * high);
			return getArea();
		}
		void show(){
			cout<<"Triangle area = "<<(0.5 * base * high)<<endl;
		}
};
class Circle: public Shape{
	float radius;
	public:
		Circle(){
			setCircle(0);
		}
		Circle(float n){
			setCircle(n);
		}
		~Circle(){
			cout<<"bye Circle"<<endl;
		}
		void setCircle(float n){
			radius = n;
		}
		float cal(){
			setArea(3.14*(radius*2));
			return getArea();
		}
		void show(){
			cout<<"Circle area = "<<getArea()<<endl;
		}
};

int main(){
	Shape *p[3];
	Rectangle r(3,7);
	Triangle t(5,9);
	Circle c(6);
	p[0] = &r;
	p[1] = &t;
	p[2] = &c;
	for(int i=0; i<3; i++){
		p[i]->cal();
		p[i]->show();
	}
}
