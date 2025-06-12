#Virtual Functions
#include <iostream>
using namespace std;
class Musician{
	public:
		void greet();
		virtual void play(); // virtual functions
};
void Musician::greet(){
	cout<<"hello\n";
}
void Musician::play(){
	cout<<"play: la la\n";
}
class Trumpeter: public Musician{
	public:
		void greet();
		void play();
};
void Trumpeter::greet(){
	cout<<"ho ho\n";
}
void Trumpeter::play(){
	cout<<"play: toot toot\n";
}
int main(){
	Musician *pm;
	pm = new Musician;
	pm -> greet(); // hello
	pm -> play(); // la la
	delete pm;
	pm = new Trumpeter;
	pm -> greet(); // hello
	pm -> play(); // toot toot
	delete pm;
}