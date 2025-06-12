#include <iostream>
#include <string.h>
using namespace std;
class Person{
	char fname[20];
	char lname[20];
	public:
		Person(){
			setName("firstname", "lastname");
		}
		Person(char *f, char *l){
			setName(f,l);
		}
		void setName(char *f, char *l){
			strcpy(fname,f);
			strcpy(lname,l);
		}
		void showName(){
			cout<<fname<<" "<<lname<<endl;
		}
};
class Student: public Person{
	char id[10];
	public:
		void setID(char *i){
			strcpy(id,i);
		}
		void showID(){
			cout<<"Student ID: "<<id<<endl;
		}
};
int main(){
	Person p("Somchai","Rakdee");
	p.showName();
	Student s;
	s.showName();
	s.setName("Somsamorn","Meesuk");
	s.setID("12345");
	s.showName();
	s.showID();
}
