#include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A"<<endl;
		}
		void f(){
			cout<<"f() in A"<<endl;
		}
};
class B: virtual public A{
	public:
		B(){
			cout<<"B"<<endl;
		}
		void f(){
			cout<<"f() in B"<<endl;
		}
};
class C: public B{
	public:
		C(){
			cout<<"C"<<endl;
		}
		void f(){
			cout<<"f() in C"<<endl;
		}
};
class E{
	public:
		E(){
			cout<<"E"<<endl;
		}
};
class D: virtual public A, public C, public E{
	public:
		D(){
			cout<<"D"<<endl;
		}
		void show(){
			f();
		}
};
int main(){
	D m;
	m.show();
}
