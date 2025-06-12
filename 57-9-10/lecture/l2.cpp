#include <iostream>
using namespace std;
class Foo{
	public:
		void func(int a);
	private:
		void func(char a); 
};

int main(){
	Foo f;
	f.func('a'); //error: because func(char a) still is private 
}
