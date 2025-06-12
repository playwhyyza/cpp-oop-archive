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
	Trumpeter t;
	Musician m, *pm;
	m.greet(); // hello
	m.play(); // la la
	t.greet(); // ho ho
	t.play(); // toot toot 
	pm = &m; // send address of m to pm
	pm -> greet(); // hello
	pm -> play(); // la la
	pm = &t; // send address of t to pm
	pm -> greet(); // hello
	pm -> play(); // toot toot
}