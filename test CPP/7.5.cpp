#include <iostream>
#include <string.h>
using namespace std;
class MyString{
	char s[80];
	public:
		MyString(){
			strcpy(s,"");
		}
		MyString(char *x){
			strcpy(s,x);
		}
		bool operator<(MyString m){
			return (strlen(s) < strlen(m.s)) ? true : false;
		}
		bool operator==(MyString m){
			return (strcmp(s,m.s) == 0) ? true : false;
		}
		void show(){
			cout<<s<<endl;
		}
};
int main(){
	MyString x("CS212"), y("CS222");
	x.show();
	y.show();
	if(x == y)
		cout<<"equal"<<endl;
	else
		cout<<"not equal"<<endl;
	if(x < y)
		cout<<"x < y"<<endl;
	else
		cout<<"x >= y"<<endl;
}
