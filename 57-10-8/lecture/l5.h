#include <iostream>
using namespace std;
int main(){
	try{
		throw 50;
	}
	catch(int ex){
		cout<<"Exception NO:"<<endl;
	}
}