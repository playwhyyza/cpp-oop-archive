// Passing Object by Value
#include <iostream>
using namespace std;
void draw(TextBox tbox);
int main(){
	TextBox my_tbox;
	//...
	draw(my_tbox); // call copy constructor
}