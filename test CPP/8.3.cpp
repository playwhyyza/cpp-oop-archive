#include <iostream>
#include <string.h>
using namespace std;
class Pet{
	char *name;
	int sex; // 0: male, 1: female;
	public:
		Pet(){
			sex = 0;
			name = 0;
		}
		~Pet(){
			delete[] name;
		}
		Pet(char *n, int s){
			name = new char[strlen(n) + 1];
			strcpy(name,n);
		}
		Pet(const Pet &p){
			cout<<"copy constructor is called"<<endl;
			sex = p.sex;
			if(p.name != 0){
				name = new char[strlen(p.name) + 1];
				strcpy(name,p.name);
			}
			else
				name = 0;
		}
		Pet myPet(Pet p){
			p.show();
			return p;
		}
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"sex: "<<(sex ? "Female" : "Male")<<endl;
		}
};
int main(){
	Pet p1("Pukpui", 1);
	Pet p2 = p1;
	p2.show();
	p2.myPet(p1);
}
