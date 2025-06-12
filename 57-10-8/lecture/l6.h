#include <iostream>
using namespace std;
int main(){
	try{
		char a;
		throw a;
	}
	catch(int i){
		cout<<"Exception"<<i;
	}
	catch(double d){
		cout<<"Exception"<<d;
	}
	catch(...){
		cout<<"Exception"<<..;
	}
}