#Abstract Class
class Musician{
	public:
		virtual void greet(); // virtual function
		virtual void play() = 0; // pure virtual function
};
int main(){
	Musician m; // error
	Musician *pm; // ok
	pm = new Musician; // error
}