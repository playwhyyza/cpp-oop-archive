#include <iostream>
using namespace std;
class A{
	public:
		int f1(){
			return 1;
		}
		int f2(){
			return 2;
		}
};
class B: public A{
	public:
		int f1(){
			return 4;
		}
		int f3(){
			return 3;
		}
		int f4(){
			return f1();
		}
		int f5(){
			return A::f1();
		}
};
int main(){
	A a;
	B b;
	cout<<a.f1()<<endl;
	cout<<b.f1()<<endl;
	cout<<b.f3()<<endl;
	cout<<b.f2()<<endl;
	cout<<b.f4()<<endl;
	cout<<b.f5()<<endl;
	cout<<b.A::f1()<<endl;
}
