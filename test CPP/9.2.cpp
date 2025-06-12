#include <iostream>
using namespace std;
class Animal{
	public:
		Animal(){
			cout<<"Animal"<<endl;
		}
		virtual void move(){
			cout<<"I am moving"<<endl;
		}
		virtual ~Animal(){
			cout<<"bye Animal"<<endl;
		}
};
class Bird: public Animal{
	public:
		Bird(){
			cout<<"Bird"<<endl;
		}
		void move(){
			cout<<"I am flying"<<endl;
		}
		~Bird(){
			cout<<"bye Bird"<<endl;
		}
};
class Fish: public Animal{
	public:
		Fish(){
			cout<<"Fish"<<endl;
		}
		void move(){
			cout<<"I am swimming"<<endl;
		}
		~Fish(){
			cout<<"bye Fish"<<endl;
		}
};
class Snake: public Animal{
	public:
		Snake(){
			cout<<"Snake"<<endl;
		}
		void move(){
			cout<<"I am crawling"<<endl;
		}
		~Snake(){
			cout<<"bye Snake"<<endl;
		}
};
int main(){
	Animal *p[3];
	p[0] = new Bird;
	p[1] = new Fish;
	p[2] = new Snake;
	for(int i=0; i<3; i++)
		p[i]->move();
	for(int i=0; i<3; i++)
		delete p[i];
}
