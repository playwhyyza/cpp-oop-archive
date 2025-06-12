#include <iostream>
using namespace std;
class Animal{
	public:
		virtual void show()=0;
};
class Bird: public Animal{
	public:
		void show(){
			cout<<"I am a bird"<<endl;
		}
};
class Chicken: public Bird{
	public:
		void show(){
			cout<<"I am a chicken"<<endl;
		}
};
class Hen: public Chicken{
	public:
		void show(){
			cout<<"I am a hen"<<endl;
		}
};
void func(Animal *a){
	a->show();
}
int main(){
	Animal *p[4];
	Bird b;
	Chicken c;
	Hen h;
	p[0] = &b;
	p[1] = &c;
	p[2] = &h;
	for(int i=0; i<3; i++)
		func(p[i]);
}
