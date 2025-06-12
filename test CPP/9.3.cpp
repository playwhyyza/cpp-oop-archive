#include <iostream>
using namespace std;
class Animal{
	public:
		virtual void print(ostream& os){
			os<<"Animal"<<endl;
		}
};
class Bird: public Animal{
	public:
		void print(ostream& os){
			os<<"Bird"<<endl;
		}
};
class Fish: public Animal{
	public:
		void print(ostream& os){
			os<<"Fish"<<endl;
		}
};
class Snake: public Animal{
	public:
		void print(ostream& os){
			os<<"Snake"<<endl;
		}
};
ostream& operator << (ostream& os, Animal &a){
	a.print(os);
	return os;
}
int main(){
	Animal a;
	Bird b;
	Fish f;
	Snake s;
	cout<<a;
	cout<<b;
	cout<<f;
	cout<<s;
}
