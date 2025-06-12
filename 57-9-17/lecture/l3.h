//Copy constructor
#include <iostream>
using namespace std;
class TextBox: public A{
	public:
		TextBox(TextBox &source); //copy constructor
};
TextBox::TextBox(TextBox &source){
	A::operator = (source); // assign object
	textColor = source.textColor;
	frameThickness = source.frameThickness;
	if(source.text != 0){ // check source is null ?
		text = new char[strlen(source.text) + 1]; // find length of char + 1 because c++ last character is /0
		strcpy(text, source.text); // allocate memory
	}else{
		text = 0;
	}
}
int main(){
	TextBox t1; // call default constructor
	TextBox t2 = t1; // call copy constructor
	t2 = t1; // assignment operator
}