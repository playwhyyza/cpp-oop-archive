#include <iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"in class A"<<endl;
		}
};
class B{
	public:
		void show(){
			cout<<"in class B"<<endl;
		}
};
class C:public A, public B{
	public:
		void f(){
			//show(); //error: reference to 'show' is ambiguous
			A::show(); //ok
			B::show(); //ok
		}
};
int main(){
	C m;
	m.A::show(); //ok
	m.B::show(); //ok
	//m.show(); //error: request for member 'show' is ambiguous
}
