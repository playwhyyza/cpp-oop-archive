#include <iostream>
using namespace std;
class A{
	private:
		int a1;
	protected:
		int a2;
	public:
		int a3;
};
class B: private A{
	private:
		int b1;
	protected:
		int b2;
	public:
		int b3;
		void fB(){
			b1 = a2; //ok
			b1 = a3; //ok
		}
};
class C: public B{
	private:
		int c1;
	protected:
		int c2;
	public:
		int c3;
		void fC(){
			//c1 = a2; //error: A::a2 is protected
			//c1 = a3; //error: A::a3 is inaccessible
			c1 = b2; //ok
			c1 = b3; //ok
		}
};
int main(){
	A w;
	w.a3 = 1; //ok
	B x;
	//x.a3 = 1; //error: A::a3 is inaccessible
	x.b3 = 1; //ok
	C y;
	//y.a3 = 1; //error A::a3 is inaccessible
	y.b3 = 1; //ok
	y.c3 = 1; //ok
}
