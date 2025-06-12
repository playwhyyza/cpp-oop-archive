#include <iostream>
using namespace std;
class Three{
	int a, b, c;
	public:
		Three(){
			a = b = c = 0;
		}
		Three(int i, int j, int k){
			a = i;
			b = j;
			c = k;
		}
		Three operator+(Three m){
			return Three(a+m.a, b+m.b, c+m.c);
		}
		friend Three operator-(Three n, Three m){
			return Three(n.a-m.a, n.b-m.b, n.c-m.c);
		}
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
		}
};
int main(){
	Three x(1,2,3), y(4,5,6), z, m;
	z = x + y;
	z.show();
	z = y - x;
	z.show();
	m = x + y + z;
	m.show();
}
