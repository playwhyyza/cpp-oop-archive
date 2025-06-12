#include <iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<'A'<<endl;
		}
};
class B: public A{
	public:
		B(){
			cout<<'B'<<endl;
		}
};
class C{
	public:
		C(){
			cout<<'C'<<endl;
		}
		void f(){
			cout<<"in C"<<endl;
		}
};
void f(int i) throw (A){
	switch (i){
		case 0: throw A();
		case 1: throw B();
		default : throw C();
	}
}
int main(){
	try{
		f(1);
		cout<<"after f(2)\n";
	}
	catch (A){
		cout<<"catch A\n";
	}
	catch (B){
		cout<<"catch B\n";
	}
	catch(....){
		cout<<"catch ?\n";
	}
	cout<<"The End\n";
}