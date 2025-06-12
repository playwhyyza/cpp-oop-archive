#include <iostream>
#include <string.h>
using namespace std;
class Date{
	int month, day, year;
	public:
		Date(){
			month = day = year = 0;
		}
		void setDate(int m, int d, int y){
			month = m;
			day = d;
			year = y;
		}
		void printDate(){
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
class Person{
	char name[20];
	Date dob, dod;
	protected:
		int sex;
	public:
		Person(char *n, int s){
			strcpy(name,n);
			sex = s;
		}
		void setDob(int m, int d, int y){
			dob.setDate(m,d,y);
		}
		void setDod(int m, int d, int y){
			dod.setDate(m,d,y);
		}
		void printDob(){
			dob.printDate();
		}
		void printDod(){
			dod.printDate();
		}
		void printName(){
			cout<<name<<endl;
		}
};
class Student:public Person{
	char id[10];
	int credits;
	float gpa;
	public:
		Student(char *n, int s, char *i):Person(n,s){
			strcpy(id,i);
			credits = 0;
			gpa = 0;
		}
		void setGrade(int c, float g){
			credits = c;
			gpa = g;
		}
		void printSex(){
			cout<<(sex ? "male" : "female");
		}
};
int main()
{
	Student x("Somchai", 1, "001");
	x.setDob(5, 13, 1980);
	x.setGrade(130, 3.5);
	x.printName();
	x.printSex();
}
