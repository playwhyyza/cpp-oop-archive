#include <iostream>
using namespace std;
class Musician{ 
	int volume;
	public:
		virtual void print(ostream &os);
};
class Trumpeter: public Musician{
	int mute_level;
	public:
		void print(ostream *os);
};
void Musician::print(ostream *os){
	*os<<"Musician{"<<volume<<"}";
}
void Trumpeter::print(ostream *os){
	*os<<"Trumpeter{";
	Musician::print(os);
	*os<<","<<mute_level<<"}";
};
ostream &operator<<(ostream &os, Musician &m){
	m.print(*os);
	return os;
};
int main(){
	Musician *pm;
	pm = new Trumpeter;
	cout<<*pm;
	delete pm;
}
