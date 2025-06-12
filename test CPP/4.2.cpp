#include <iostream>
using namespace std;
int main()
{
	int n = 5;
	int &r = n;
	int &k = r;
	int &i = k;
	cout<<"n = "<<n<<" r = "<<r<<" k = "<<k<<" i = "<<i<<endl;
	n++;
	cout<<"n = "<<n<<" r = "<<r<<" k = "<<k<<" i = "<<i<<endl;
	r++;
	cout<<"n = "<<n<<" r = "<<r<<" k = "<<k<<" i = "<<i<<endl;
	k++;
	cout<<"n = "<<n<<" r = "<<r<<" k = "<<k<<" i = "<<i<<endl;
	i++;
	cout<<"n = "<<n<<" r = "<<r<<" k = "<<k<<" i = "<<i<<endl;
}
