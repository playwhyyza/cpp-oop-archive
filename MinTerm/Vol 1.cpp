#include <iostream>
using namespace std;
class T{
	int t;
	public:
		T(){
			t = 7;
			cout<<"T"<<endl;
		}
		T(int j){
			t = j;
		}
		~T(){
			show();
		}
		void show(){
			cout<<t<<endl;
		}
};
class X{
	int a;
	protected:
		int b;
	public:
		X(){
			a = b = 0;
			cout<<"X"<<endl;
		}
		X(int b){
			this->b = b;
			a = 1;
			cout<<"XX"<<endl;
		}	
		~X(){
			cout<<a<<endl;
		}
		void set(int j){
			a = j;
			b = 1;
		}
};
class Y: public X{
	int a;
	protected:
		int b;
	public:
		Y():X(3){
			a = 2;
			b = 1;
			cout<<"Y"<<endl;
		}
		Y(int j){
			this->a = j;
			b = j + 1;
		}
		~Y(){
			cout<<a<<endl;
		}
		void set(int j){
			a = j;
			this->b = 2;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class Z: public Y{
	T t;
	public:
		Z(){
			t = T(0);
		}
		Z(T t):Y(1){
			this->t = t;
		}
		~Z(){
			t.show();
		}
};
int main(){
	Z s;
	s.set(4);
	T t;
	Z p(t);
	Y y;
	y.show();
}
