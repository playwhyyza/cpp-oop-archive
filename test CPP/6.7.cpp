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
class C: public B, virtual public A{
	public:
		C(){
			cout<<"C"<<endl;
		}
		void show(){
			f();
		}
};
int main(){
	C m;
	m.show();
}
