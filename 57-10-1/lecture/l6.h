class Musician{ // Abstract class
	public:
		virtual void play() = 0; 
};
class BrassMusician: public Musician{ // Abstract class
};
class WoodwindMusician: public Musician{ // Abstract class 
	public:
		void play() = 0;
};
class Trumpeter: public BrassMusician{
	public:
		void play(); // Concrete class
};
class JazzTrumpeter: public Trumpeter{
}; // Concrete class 