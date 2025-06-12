#include <iostream>
using namespace std;

class MyObj
{
	private:
		int width, height;
		float price;
	public:
		void getObj();
		void showObj();
};
void MyObj::getObj()
{
	cout<<"Enter width: ";
	cin>>width;
	cout<<"Enter height: ";
	cin>>height;
	cout<<"Enter price: ";
	cin>>price;
}
void MyObj::showObj()
{
	cout<<"Width = "<<width<<endl;
	cout<<"Height = "<<height<<endl;
	cout<<"Price = "<<price<<endl;
}
int main()
{
	int max;
	cout<<"How many object?";
	cin>>max;
	MyObj mobile[max];
	for(int i=0; i<max; i++)
	{
		cout<<"Object no."<<i+1<<endl;
		mobile[i].getObj();
	}
	cout<<"--Show result--"<<endl;
	for(int j=0; j<max; j++)
	{
		cout<<"Show object no."<<j+1<<endl;
		mobile[j].showObj();
	}
}
