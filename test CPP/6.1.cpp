#include <iostream>
using namespace std;
class A{
	int a1;
	protected:
		int a2;
	public:
		A(){
			a1 = a2 = 0;
			cout<<"A"<<endl;
		}
		A(int i){
			a1 = i;
			a2 = ++i;
			cout<<"a1 = "<<a1<<" a2 = "<<a2<<endl;
		}
		~A(){
			cout<<"bye A"<<endl;
		}
};
class B{
	int b1;
	protected:
		int b2;
	public:
		B(){
			b1 = b2 = 0;
			cout<<"B"<<endl;
		}
		B(int i){
			b1 = i;
			b2 = ++i;
			cout<<"b1 = "<<b1<<" b2 = "<<b2<<endl;
		}
		~B(){
			cout<<"bye B"<<endl;
		}
};
class C: public A, public B{
	int c;
	public:
		C(){
			c = 0;
			cout<<"C"<<endl;
		}
		C(int i){
			c = i;
			cout<<"c = "<<c<<endl;
		}
		C(int i, int j, int k):B(k),A(j){
			c = i;
			cout<<"c = "<<c<<endl;
		}
		~C(){
			cout<<"bye C"<<endl;
		}
		int f(){
			return (a2 + b2);
		}
};
int main(){
	C m;
	C n(1);
	C p(2,3,4);
	cout<<p.f()<<endl;
}
