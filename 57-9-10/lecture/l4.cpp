#include <iostream>
using namespace std;
class A{
	public:
		int f(int i){
			return i + 1;
		}
};
class B: public A{
	public:
		int f(float j){
			return j + 10;
		}
};
int main(){
	B b;
	cout<<b.f(2);
}
