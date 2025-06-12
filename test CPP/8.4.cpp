#include <iostream>
using namespace std;
class Rectangle{
	double width;
	double height;
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
		void print(ostream& os){
			os<<width<<" x "<<height<<" = "<<area<<endl;
		}
		void input(istream& is){
			cout<<"Enter width: ";
			is>>width;
			cout<<"Enter height: ";
			is>>height;
			area = width * height;
		}
};
ostream& operator<<(ostream &os, Rectangle &r){
	r.print(os);
	return os;
}
istream& operator>>(istream &is, Rectangle &r){
	r.input(is);
	return is;
}
int main(){
	Rectangle r1(3.0,4.0), r2;
	cin>>r2;
	cout<<r2<<r1;
	//system("PAUSE");
}
