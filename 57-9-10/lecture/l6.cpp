#include <iostream>
using namespace std;
class Orange{
	int x,y;
	public:
		Orange(){
			x = 0;
			y = 0;
		}
		Orange operator ++(){
			x += 10;
			y += 10;
			return *this;
		}
		Orange operator ++(int){
			x += 5;
			y += 5;
			return *this;
		}
		void print(){
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
};
int main(){
	Orange o1, o2, o3, o4;
	o1++;
	o1.print();
	++o2;
	o2.print();
	o3 = ++o1;
	o3.print();
	o4 = o1++;
	o4.print();
	o1.print();
}
