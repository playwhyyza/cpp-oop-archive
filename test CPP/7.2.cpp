#include <iostream>
using namespace std;
class Counter{
	int count;
	public:
		Counter(){
			count = 0;
		}
		int getCount(){
			return count;
		}
		void operator++(){
			++count;
		}
		friend void operator--(Counter &x){
			x.count--;
		}
};
int main(){
	Counter a;
	cout<<a.getCount()<<endl;
	++a;
	++a;
	cout<<a.getCount()<<endl;
	--a;
	cout<<a.getCount()<<endl;
}
