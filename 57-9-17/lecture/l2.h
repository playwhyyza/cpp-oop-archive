//assignment operator
#include <iostream>
using namespace std;
class TextBox: public A{
	public:
		void operator = (TextBox &source);
};
void TextBox::operator = (TextBox &source){
	if(this == &source) // (this) is destination (source) is source
		return;
	A::operator = (source); // assign object
	textColor = source.textColor;
	frameThickness = source.frameThickness;
	delete[] text; // delete text of destination
	if(source.text != 0){ // check source is null ?
		text = new char[strlen(source.text) + 1]; // find length of char + 1 because c++ last character is /0
		strcpy(text, source.text); // allocate memory
	}else{
		text = 0;
	}
}
int main(){
	TextBox source, destination;
	destination.opetator = (source);
}