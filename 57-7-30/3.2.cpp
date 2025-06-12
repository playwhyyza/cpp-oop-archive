#include <iostream>
#include <string.h>
using namespace std;
class MyName
{
	char name[10];
	public:
		MyName()
		{
			strcpy(name,"noname");
			cout<<"Hi "<<name<<endl;
		}
		MyName(char *n)
		{
			strcpy(name,n);
			cout<<"Hi "<<name<<endl;
		}
		~MyName()
		{
			cout<<"Bye bye "<<name<<endl;
		}
};
int main()
{
	MyName n[2];
	MyName p[3] = {"Somkid", "Pawalai", "Sathit"};
	MyName r[3][2] = {"r1", "r2", "r3", "r4", "r5", "r6"};
}
