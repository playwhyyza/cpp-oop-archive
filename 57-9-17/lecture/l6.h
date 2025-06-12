#include <iostream>
using namespace std;
void vfunc(TextBox t); // Receives object by value
void rfunc(TextBox &t); // Receives by reference 
void pfunc(TextBox *t); // Receives by reference
int main(){
	TextBox tbox; // call default constructor
	vfunc(tbox); // call TextBox copy constructor
	rfunc(tbox); // doesn't call TextBox copy constructor
	pfunc(tbox); // doesn't call TexBox copy constructor
}