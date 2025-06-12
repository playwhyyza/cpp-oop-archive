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
		void set(int i){
			t = i;
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
			this-> b = b;
			a = b + 1;
			cout<<"XX"<<endl;
		}
		~X(){
			cout<<a<<endl;
		}
		void set(int t){
			a = t;
			b = 1;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class Y: public X{
	int a;
	protected:
		int b;
	public:
		Y():X(2){
			a = 1;
			b = 4;
			cout<<"Y"<<endl;
		}
		Y(int j){
			a = j;
			b = j - 1;
		}
		~Y(){
			show();
		}
		void set(int t){
			a = t;
			b = 2;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class Z: public Y{
	T m;
	public:
		Z(){
			cout<<"Z"<<endl;
		}
		~Z(){
			cout<<b<<endl;
		}
		void set(int t){
			X::set(t);
			Y::set(t + 1);
			m.set(t + 2);
		}
		T getT(){
			return m;
		}
		void show(){
			X::show();
			Y::show();
			m.show();
		}
};
int main(){
	Z s;
	s.set(4);
	s.getT().show();
	s.show();
	Y y(1);
}
