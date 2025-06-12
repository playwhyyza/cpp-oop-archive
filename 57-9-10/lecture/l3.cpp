#include <iostream>
using namespace std;

void f(int x){
	x = x + 1;
}
void f(float y){
	y = y - 1;
}
int main(){
	f('A'); //case char to integer 
}
