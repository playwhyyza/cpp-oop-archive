class Musician{
	public:
		virtual ~Musician();
};
Musician::~Musician(){
	cout<<"destroy Musician\n";
}
class Trumpeter: public Musician{
	public:
		~Trumpeter();
};
Trumpeter::~Trumpeter(){
	cout<<"destroy Trumpeter";
}
int main(){
	Trumpeter *pt;
	Musician *pm;
	pt = new Trumpeter;
	delete pt;	// ok: destroy Trumpeter | destroy Musician
	pm = new Trumpeter;
	delete pm; // ok: destroy Trumpeter | destroy Musician
}