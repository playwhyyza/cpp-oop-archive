#Virtual Functions
void main(){
	Musician *pm = new Trumpeter;
	pm -> play(); // toot toot
	pm -> Musician::play(); // la la
	pm -> Trumpeter::play(); // error
	delete pm;
}