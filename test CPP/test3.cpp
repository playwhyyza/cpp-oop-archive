#include <iostream>
using namespace std;
class X{
	int i;
	public:
		X(){
			cout<<"test"<<endl;
		}
		X(int x, float y, char c){
			x = 1;
			y = 2.5;
			c = 'A';
			i = 3;
			cout<<x<<endl<<y<<endl<<c<<endl<<"******"<<endl;
		}
};
class Y: public X{
	public:
		Y(int x, float y, char c, int d):X(x,y,c){
			x = d;
			c = 'K';
			cout<<x<<endl<<y<<endl<<c<<endl<<d<<endl<<"********"<<endl;
		}
};
class Z: public Y{
	public:
		Z(int x, float y, char c, int d):Y(x,y,c,d){
			x = d;
			c = 'K';
			cout<<x<<endl<<y<<endl<<c<<endl<<d<<endl;
		}
};
int main(){
	Z y(4, 5.5, 'c', 6);
}
