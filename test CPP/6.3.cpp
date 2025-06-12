#include <iostream>
using namespace std;
class A{
	public:
		void f(){
			cout<<"f()"<<endl;
		}
};
class B: public A{
	
};
class C: public A{
	
};
class D: public B, public C{
	public:
		void show(){
			f(); // error reference to 'f' is ambigous
		}
};
int main(){
	D m;
}
