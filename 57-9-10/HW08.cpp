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
			wide = 1;
			length = 1;
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
		Rectangle operator ++ (){ // ++ length prefix
			++length;
			return *this;
		}
		Rectangle operator ++ (int){ // ++ wide postfix
			/*wide++;
			Rectangle temp;
			temp.wide = wide;
			return temp;*/
			wide++;
			return *this;
		}
		Rectangle operator -- (){ // -- length prefix
			if(length <= 1)
				return *this;
			else{
				--length;
				return *this;
			}	
		}
		friend Rectangle operator -- (Rectangle &x, int){ // -- wide postfix
			if(x.wide <= 1)
				return x;
			else{
				x.wide--;
				return x; 
			}
		}
		bool operator < (Rectangle m){
			return (area() < m.area()) ? true : false;
		}
		bool operator <= (Rectangle m){
			return (area() <= m.area()) ? true : false;
		}
		bool operator > (Rectangle m){
			return (area() > m.area()) ? true : false;
		}
		bool operator >= (Rectangle m){
			return (area() >= m.area()) ? true : false;
		}
		bool operator != (Rectangle m){
			return (area() != m.area()) ? true : false;
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
	Rectangle a(4,6,"A"), b(9,10,"B");
	++a;
	a++;
	cout<<"====================================="<<endl;
	a.show();
	--a;
	a--;
	cout<<"====================================="<<endl;
	a.show();
	cout<<"====================================="<<endl;
	if(a < b)
		cout<<"a < b"<<endl;
	else
		cout<<"a > b"<<endl;
	cout<<"====================================="<<endl;
	if(a <= b)
		cout<<"a <= b"<<endl;
	else
		cout<<"a > b"<<endl;
	cout<<"====================================="<<endl;
	if(a > b)
		cout<<"a > b"<<endl;
	else
		cout<<"a < b"<<endl;
	cout<<"====================================="<<endl;
	if(a >= b)
		cout<<"a >= b"<<endl;
	else
		cout<<"a < b"<<endl;
	cout<<"====================================="<<endl;
	if(a != b)
		cout<<"a != b"<<endl;
	else
		cout<<"a == b"<<endl;
	cout<<"====================================="<<endl;
	cout<<"A.length = "<<a.getLength()<<endl;
	for(int i=0; i<10; i++){
		--a;
		cout<<"A.length = "<<a.getLength()<<endl;
	}
	a.show();
	cout<<"A.wide = "<<a.getWide()<<endl;
	for(int i=0; i<10; i++){
		a--;
		cout<<"A.wide = "<<a.getWide()<<endl;
	}
	a.show();
}
