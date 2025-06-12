#include <iostream>
using namespace std;
class A {
	int row, col;
	int **a;
	public:
		A()
		{
			a = 0;
			row = col = 0;
		}
		A(int r, int c);
		~A();
		void set();
		void show();
};
A::A(int r, int c)
{
	row = r;
	col = c;
	a = new int *[row]; // set up row
	for(int i=0; i<row; i++)
		a[i] = new int[col]; // set up column
}
A::~A()
{
	if(a != 0)
	{
		for(int i=0; i<row; i++)
			delete [] a[i]; // delete column
		delete [] a; // delete row
	}
}
void A::set()
{
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
		{
			cout<<"Input a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
}
void A::show()
{
	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<endl;
		}
}
int main()
{
	A x(2,3);
	x.set();
	x.show();
}
