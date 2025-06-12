class A{
	public:
		void virtual show(){
			cout<<"A"<<endl;
		}
};
class B: public A{
	public:
		void show(){
			cout<<"B"<<endl;
		}
};
class C: public A{
	public:
		void show(){
			cout<<"C"<<endl;
		}
};
class D: public B{
	public:
		void show(){
			cout<<"D"<<endl;
		}
};
void doit(A *a){
	a -> show();
}
int main(){
	A *a = new A;
	B *b = new B;
	C *c = new c;
	D *d = new D;
	a -> show(); // A
	b -> show(); // B
	c -> show(); // C
	d -> show(); // D
	doit(a); // A
	doit(b); // B
	doit(c); // C
	doit(d); // D
}