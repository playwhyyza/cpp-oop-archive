#include <iostream>
using namespace std;
class MyInt{
	int a;
	public:
		MyInt(){
			a = 0;
		}
		void f(){
			show();
		}
		void f(int i){
			a = i;
			show();
		}
		void f(int i, int j){
			a = i * j;
			show();
		}
		void f(double i){
			cout<<"Sorry, I am integer"<<endl;
		}
		void show(){
			cout<<a<<endl;
		}
};
int main(){
	MyInt x;
	x.f();
	x.f(2);
	x.f(2.0);
	x.f(2,3);
}
