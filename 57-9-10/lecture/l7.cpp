#include <iostream>
using namespace std;
class Elephant{
	int x,y,z;
	public:
		Elephant(int i, int j, int k){
			x = i;
			y = j;
			z = k;
		}
		int operator[](int);
};
int Elephant::operator[](int i){
	switch(i){
		case 1: return x;
		case 2: return y;
		case 3: return z;
		default: return 0;
	}
}
int main(){
	Elephant e(3,4,5);
	cout<<e[1]<<e[2]<<e[3]<<e[4];
}
