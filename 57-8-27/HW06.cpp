#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
class Date{
	int day, month, year;
	public:
		Date(){
			setDate(0,0,0);
		}
		Date(int d, int m, int y){
			setDate(d,m,y);
		}
		void setDate(int d, int m, int y){
			day = d;
			month = m;
			year = y;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		void printDate(){
			cout<<"Date = "<<day<<"/"<<month<<"/"<<year<<endl;
		}
};
class Address{
	char village[80];
	char soi[80];
	char road[80];
	char district[80];
	char province[80];
	char country[80];
	char postal[10];
	public:
		Address(){
			setAddress("no","no","no","no","no","no","no");
		}
		Address(char *vil, char *so, char *roa, char *dis, char *pro, char *cou, char *pos){
			setAddress(vil,so,roa,dis,pro,cou,pos);
		}
		void setAddress(char *vil, char *so, char *roa, char *dis, char *pro, char *cou, char *pos){
			strcpy(village,vil);
			strcpy(soi,so);
			strcpy(road,roa);
			strcpy(district,dis);
			strcpy(province,pro);
			strcpy(country,cou);
			strcpy(postal,pos);
		}
		void printAddrees(){
			cout<<"Address = "<<village<<" "<<soi<<" "<<road<<" "<<district<<" "<<province<<" "<<country<<" "<<postal<<endl;
		}
};
class Person{
	char Pid[20];
	char fname[20];
	char lname[20];
	Date Da;
	Address Ad;
	public:
		Person(){
			/*strcpy(Pid,"0000");
			strcpy(fname,"nofirstname");
			strcpy(lname,"nolastname");*/
			setName("0000","nofirstname","nolastname");
		}
		Person(char *i, char *n, char *m){
			setName(i,n,m);
		}
		~Person(){
			//delete
			cout<<"bye bye"<<endl;
		}
		void setName(char *i, char *n, char *m){
			strcpy(Pid,i);
			strcpy(fname,n);
			strcpy(lname,m);
		}
		char* getID(){
			return Pid; 
		}
		char* getFName(){
			return fname;
		}
		char* getLName(){
			return lname;
		}
		void showPerson(){
			cout<<"Public ID = "<<Pid<<endl;
			cout<<"Name = "<<fname<<" "<<lname<<endl;
			Da.printDate();
			Ad.printAddrees();
		}
		void setDa(int d, int m, int y){
			Da.setDate(d,m,y);
		}
		void setAd(char *vil, char *so, char *roa, char *dis, char *pro, char *cou, char *pos){
			Ad.setAddress(vil,so,roa,dis,pro,cou,pos);
		}
		int checkAge(){
			int n;
			cout<<"input current year = ";
			cin>>n;
			return n - Da.getYear();
		}
};
class Student:public Person{
	char Sid[20];
	char faculty[80];
	char department[80];
	float gpa;
	float checkGPA(char n){
			switch(n){
				case 'A' : return 4.00 * 3;
					break;
				case 'B' : return 3.00 * 3;
					break;
				case 'C' : return 2.00 * 3;
					break;
				case 'D' : return 1.00 * 3;
					break;
					
				default :
					return 0.00;  
			}
	}
	public:
		Student():Person(){
			/*strcpy(Sid,"0000");
			strcpy(faculty,"None");
			strcpy(department,"None");
			gpa = 0.0;*/
			setStudent("0000","None","None");
		}
		/*Student(char *i, char *n, char * m, char *s, char *f, char *d):Person(i,n,m){
			setStudent(s,f,d);
		}*/
		Student(char *i, char *n, char *m, char *s, char *f, char *d){
			setName(i,n,m);
			setStudent(s,f,d);
		}
		~Student(){
			//delete
			cout<<"bye bye"<<endl;
		}
		void setStudent(char *s, char *f, char *d){
			strcpy(Sid,s);
			strcpy(faculty,f);
			strcpy(department,d);
			gpa = 0.0;
		}
		char* getSid(){
			return Sid;
		}
		char* getFaculty(){
			return faculty;
		}
		char* getDepartment(){
			return department;
		}
		void showStudent(){
			showPerson();
			cout<<"Student ID = "<<Sid<<endl;
			cout<<"Faculty = "<<faculty<<endl;
			cout<<"Department = "<<department<<endl;
			cout<<"GPA = "<<gpa<<endl;
			cout<<"Age = "<<checkAge();
		}
		float getGPA(char a, char b, char c){
			float n = 0.0;
			n += checkGPA(a);
			n += checkGPA(b);
			n += checkGPA(c);
			return gpa = (n / 9);
		}
};
class Teacher:public Person{
	char Tid[20];
	char faculty[80];
	char department[80];
	float salary;
	public:
		Teacher():Person(){
			/*strcpy(Tid,"0000");
			strcpy(faculty,"None");
			strcpy(department,"None");
			salary = 0.0;*/
			setTeacher("0000","None","None",0.0);
		}
		/*Teacher(char *i, char *n, char *m, char *t, char *f, char *d, float s):Person(i,n,m){
			setTeacher(t,f,d,s);
		}*/
		Teacher(char *i, char *n, char *m, char *t, char *f, char *d, float s){
			setName(i,n,m);
			setTeacher(t,f,d,s);
		}
		~Teacher(){
			//delete
			cout<<"bye bye"<<endl;
		}
		void setTeacher(char *t, char *f, char *d, float s){
			strcpy(Tid,t);
			strcpy(faculty,f);
			strcpy(department,d);
			salary = s;
		}
		char* getTid(){
			return Tid;
		}
		char* getFaculty(){
			return faculty;
		}
		char* getDepartment(){
			return department;
		}
		float getSalary(){
			return salary;
		}
		void showTeacher(){
			showPerson();
			cout<<"Teacher ID = "<<Tid<<endl;
			cout<<"Faculty = "<<faculty<<endl;
			cout<<"Department = "<<department<<endl;
			cout<<"Salary = "<<salary<<endl;
			cout<<"Age = "<<checkAge()<<endl;
		}
};
int main()
{
	Student A("13252222521","WEWEW","aSDSDSDA","5505002997","Science","Computer");
	A.setDa(8,9,2535);
	A.setAd("222 sss","siburapha ","siburapha","bangkapi","bangkok","thailand","10240");
	A.getGPA('A','B','B');
	A.showStudent();
	cout<<"\n==========================================="<<endl;
	Teacher B("123456789123","Somchai","Sabaidee", "4422335566","Science","Computer",45000);
	B.setDa(5,2,2504);
	B.setAd("Ramkhamheang University","-","Ramkhamheang","Bangkapi","Bangkok","Thailand","10240");
	B.showTeacher();
}
