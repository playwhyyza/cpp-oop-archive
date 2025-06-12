// not assignment operator
#include <iostream>
using namespace std;
class A{
	int top, left, width, height;
	public:
		....
};
class Color{
	int data;
	public:
		....
};
class TextBox: public A{
	Color textColor;
	int frameThickness;
	char *text;
};
int main(){
	TextBox source, destination;
	destination = source; //assign instance ของ class ให้กันและกันได้
}