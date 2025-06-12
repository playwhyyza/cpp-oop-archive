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
class B: protected A{
	private:
		int b1;
	protected:
		int b2;
	public:
		int b3;
		void fB(){
			//b1 = a1; //error: A::a1 is private
			b1 = a2; // ok
			b1 = a3; // ok
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
			//c1 = a1; //error: A::a1 is private
			c1 = a2; //ok
			c1 = a3; //ok
			//c1 = b1; //error: B::b1 is private
			c1 = b2; //ok
			c1 = b3; //ok
		}
};
int main(){
	A w;
	//w.a1 = 1; //error: A::a1 is private
	//w.a2 = 1; //error: A::a2 is protected
	w.a3 = 1; //ok
	B x;
	/*x.a1 = 1; //error: A::a1 is private
	x.a2 = 1; //error: A::a2 is protected
	x.a3 = 1; //error: A::a3 is inaccessible
	x.b1 = 1; //error: B::b1 is private
	x.b2 = 1; //error: B::b2 is protected*/
	x.b3 = 1; //ok
	C y;
	/*y.a1 = 1; //error: A::a1 is private
	y.a2 = 1; //error: A::a2 is protected
	y.a3 = 1; //error: A::a3 is inaccessible
	y.b1 = 1; //error: B::b1 is private
	y.b2 = 1; //error: B::b2 is protected*/
	y.b3 = 1; //ok
	//y.c1 = 1; //error: C::c1 is private
	//y.c2 = 1; //error: C::c2 is protected
	y.c3 = 1; //ok 
}
