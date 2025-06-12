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
void func(Musician &rm){
	rm.play();
}
int main(){
	Musician m;
	Trumpeter t;
	func(m); // la la
	func(t); // toot toot
}