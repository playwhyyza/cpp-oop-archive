#include <iostream>
using namespace std;
class TangObj
{
	float size;
	float weight;
	int price;
	public:
		void set(float x, float y, int z)
		{
			size = x;
			weight = y;
			price = z;
		}
		void show(void);
};
void TangObj::show()
{
	cout<<"The size of the object is "<<size<<endl;
	cout<<"The weight of the object is "<<weight<<endl;
	cout<<"The price of the object is "<<price<<endl;
}
int main()
{
	TangObj bag, pencil;
	bag.set(15.0, 0.25, 100);
	pencil.set(7.5, 0.3, 20);
	bag.show();
	pencil.show();
}
