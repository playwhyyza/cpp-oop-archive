#include <iostream>
using namespace std;
class A{
	public:
	A(){
		cout<<'A'<<endl;
	}
	virtual void f() throw (int, double){
		throw 2.0;
	}
};
class B: public A{
	public:
	B(){
		cout<<'B'<<endl;
	}
	void f()throw(int, double){
		cout<<
	}
};