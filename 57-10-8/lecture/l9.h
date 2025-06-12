#include <iostream>
using namespace std;
ไปเขียนส่วนหัวเอาเองนะ
int main(){
	try{
		int *a = new int[1000];
	}
	catch(exception& e){
		cout<<e.what()<<endl;
	}
	
}