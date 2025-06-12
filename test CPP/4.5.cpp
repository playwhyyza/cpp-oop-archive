#include <iostream>
using namespace std;
class MyObj{
	int width;
	int height;
	float price;
	public:
		MyObj(int i, int j, float k)
		{
			width = i;
			height = j;
			price = k;
		}
		~MyObj()
		{
			cout<<"bye bye"<<endl;
		}
		float addPriceV(MyObj x)
		{
			return (price + x.price);
		}
		float addPriceR(MyObj &x)
		{
			return (price + x.price);
		}
};
int main()
{
	MyObj m(5,10,25.50), n(15,20,360.0);
	cout<<m.addPriceV(n)<<endl;
	cout<<m.addPriceR(n)<<endl;
}
