#include <iostream>
using namespace std;
class Counter{
	int count;
	public:
		Counter(){
			count = 0;
		}
		Counter(int c){
			count = c;
		}
		int getCount(){
			return count;
		}
		Counter operator++(){ //perfix
			++count;
			return *this;
		}
		Counter operator++(int){ //postfix
			return Counter(++count);
			/*count++;
			Counter temp;
			temp.count = count;
			return temp;*/
		}
		friend Counter operator--(Counter &x){ //prefix
			x.count--;
			return x;
		}
		friend Counter operator--(Counter &x, int){ //postfix
			x.count--;
			return x;
		}
};
int main(){
	Counter a,b,c,d,e;
	b = ++a;
	c = a++;
	a++;
	cout<<"a = "<<a.getCount()<<endl;
	cout<<"b = "<<b.getCount()<<endl;
	cout<<"c = "<<c.getCount()<<endl;
	d = --c;
	e = a--;
	cout<<"c = "<<c.getCount()<<endl;
	cout<<"d = "<<d.getCount()<<endl;
	cout<<"e = "<<e.getCount()<<endl;
}
