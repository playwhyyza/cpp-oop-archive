#include <iostream>
using namespace std;
class E;
class A{
	int x;
	protected:
		int y;
	public:
		A(){
			x = y = 0;
		}
		A(int a, int b){
			x = a;
			y = b;
		}
		int f1(){
			return x;
		}
};
class B: protected A{
	int y;
	public:
		B(){
			y = 0;
		}
		B(int a, int b): A(b,a){
			y = a;
		}
		void f2(){
			y = A().f1();
		}
		friend int qual(B,E);
};
class C: private B{
	int z;
	public:
		C(){
			z = 1;
		}
		void f3(){
			y = 2;
			z = 3;
		}
		void f4(){
			A:: y = z;
		}
};
class D: public C{
	int h;
	public:
		D(){
			h = 3;
		}
		void f5(){
			f2();
			f4();
		}
		void f6(){
			f1();
			f3();
		}
};
class E{
	int k;
	public:
		E(){
			k = 2;
		}
};
int equal(B b, E e){
	return (b.y == e.k);
}
int main(){
	B b(4,5);
	C c;
	b.f2();
	c.f1();
	c.f2();
	c.f3();
}
