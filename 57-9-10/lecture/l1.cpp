#include <iostream>
using namespace std;
void Display(char*a){
	cout<<a<<endl;
}
void Display(int a){
	cout<<a<<endl;
}
void Display(double a){
	cout<<a<<endl;
}
int main(){
	Display("Hello");
	Display(123456789);
	Display(3.1414);
	Display(987654321);
	Display(15);
}
