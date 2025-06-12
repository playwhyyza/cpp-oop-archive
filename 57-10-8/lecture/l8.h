#include <iostream>
#include <exception>
using namespace std;
class myEx: public exception{
	virtual const char* what() const throw(){
		return "Hello My Exception";
	}myex;
}	
int main(){
	try{
		throw myex;
	}
	catch(exception& e){
		cout<<e.what()<<endl;
	}
}