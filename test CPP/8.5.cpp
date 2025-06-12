#include <iostream>
using namespace std;
class Rectangle{
	double width, height;
	double area;
	public:
		Rectangle(){
			width = height = area = 0.0;
		}
		Rectangle(double w, double h){
			width = w;
			height = h;
			area = width * height;
		}
		friend ostream& operator<<(ostream& os, const Rectangle &r);
		friend istream& operator>>(istream& is, Rectangle &r);
};
ostream& operator<<(ostream& os, const Rectangle &r){
	os<<r.width<<" x "<<r.height<<" = "<<r.area<<endl;
	return os;
}
istream& operator>>(istream& is, Rectangle &r){
	cout<<"Enter width : ";
	is>>r.width;
	cout<<"Enter height : ";
	is>>r.height;
	r.area = r.width * r.height;
	return is;
}
int main(){
	Rectangle r1(3.0, 4.0), r2;
	cin>>r2;
	cout<<r2<<r1;
}
