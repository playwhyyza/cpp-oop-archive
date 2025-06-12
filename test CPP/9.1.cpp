#include <iostream>
using namespace std;
class Animal{
	public:
		void show(){
			cout<<"Animal"<<endl;
		}
		virtual void move(){
			cout<<"I am moving"<<endl;
		}
};
class Bird: public Animal{
	public:
		void show(){
			cout<<"Bird"<<endl;
		}
		void move(){
			cout<<"I am flying"<<endl;
		}
};
class Fish: public Animal{
	public:
		void show(){
			cout<<"Fist"<<endl;
		}
		void move(){
			cout<<"I am swimming"<<endl;
		}
};
class Snake: public Animal{
	public:
		void show(){
			cout<<"Snake"<<endl;
		}
		void move(){
			cout<<"I am crawling"<<endl;
		}
};
int main(){
	Animal *p[3];
	Bird b;
	Fish f;
	Snake s;
	p[0] = &b;
	p[1] = &f;
	p[2] = &s;
	for(int i=0; i<3; i++){
		p[i]->show();
		p[i]->move();
	}
}
