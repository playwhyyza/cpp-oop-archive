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
		friend ostream& operator << (ostream& os, const Date &r);
		friend istream& operator >> (istream& is, Date &r);	
};
ostream& operator << (ostream& os, const Date &r){
	os<<"Day = "<<r.day<<"/"<<r.month<<"/"<<r.year<<endl;
	return os;
}
istream& operator >> (istream& is, Date &r){
	cout<<"Enter day : ";
	is>>r.day;
	cout<<"Enter month : ";
	is>>r.month;
	cout<<"Enter year : ";
	is>>r.year;
	return is;
}
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
			setAddress("None","None","None","None","None","None","None");
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
		friend ostream& operator << (ostream& os, const Address &r);
		friend istream& operator >> (istream& is, Address &r);
};
ostream& operator << (ostream& os, const Address &r){
	os<<"Address = "<<r.village<<" "<<r.soi<<" "<<r.road<<" "<<r.district<<" "<<r.province<<" "<<r.country<<" "<<r.postal<<endl;
	return os;
}
istream& operator >> (istream& is, Address &r){
	cout<<"Enter village : ";
	is>>r.village;
	cout<<"Enter soi : ";
	is>>r.soi;
	cout<<"Enter road : ";
	is>>r.road;
	cout<<"Enter district : ";
	is>>r.district;
	cout<<"Enter province : ";
	is>>r.province;
	cout<<"Enter country : ";
	is>>r.country;
	cout<<"Enter postal : ";
	is>>r.postal;
	return is;
}
class Person{
	char Pid[20];
	char fname[20];
	char lname[20];
	Date Da;
	Address Ad;
	int age;
	public:
		Person(){
			setName("0000","nofirstname","nolastname");
			cout<<"Person"<<endl;
		}
		Person(char *i, char *n, char *m){
			setName(i,n,m);
		}
		~Person(){
			//delete
			cout<<"bye Person"<<endl;
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
			time_t theTime = time(NULL);
			struct tm *aTime = localtime(&theTime);
			int year = aTime->tm_year + 1900;
			return age = ((year + 543) - Da.getYear());
		}
		friend ostream& operator << (ostream& os, const Person &r);
		friend istream& operator >> (istream& is, Person &r);
};
ostream& operator << (ostream& os, const Person &r){
	os<<"Public ID : "<<r.Pid<<endl<<"Name : "<<r.fname<<" "<<r.lname<<endl<<r.Da<<"Age : "<<r.age<<r.Ad<<endl;
	return os;
}
istream& operator >> (istream& is, Person &r){
	cout<<"Enter Public ID : ";
	is>>r.Pid;
	cout<<"Enter First Name : ";
	is>>r.fname;
	cout<<"Enter Last Name : ";
	is>>r.lname;
	is>>r.Da;
	is>>r.Ad;
	return is;
}
class Student:virtual public Person{
	char Sid[20];
	char faculty[80];
	char department[80];
	float gpa;
	public:
		Student():Person(){
			setStudent("0000","None","None");
		}
		Student(char *i, char *n, char * m, char *s, char *f, char *d):Person(i,n,m){
			setStudent(s,f,d);
		}
		/*Student(char *i, char *n, char *m, char *s, char *f, char *d){
			setName(i,n,m);
			setStudent(s,f,d);
		}*/
		~Student(){
			//delete
			cout<<"bye Student"<<endl;
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
		}
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
		void setGPA(char a, char b, char c){
			float n = 0.0;
			n += checkGPA(a);
			n += checkGPA(b);
			n += checkGPA(c);
			gpa = (n / 9);
		}
		float getGPA(){
			return gpa;
		}
		friend ostream& operator << (ostream& os, const Student &r);
		friend istream& operator >> (istream& is, Student &r);
};
ostream& operator << (ostream& os, const Student &r){
	os<<"Student ID : "<<r.Sid<<endl<<"Faculty : "<<r.faculty<<endl<<"Department : "<<r.department<<endl<<"GPA : "<<r.gpa<<endl<<endl;
	return os;
}
istream& operator >> (istream& is, Student &r){
	char a,b,c;
	cout<<"Enter Student ID : ";
	is>>r.Sid;
	cout<<"Enter Faculty : ";
	is>>r.faculty;
	cout<<"Enter Department : ";
	is>>r.department;
	cout<<"Enter Grade No.1 (A|B|C|D|F) :";
	is>>a;
	cout<<"Enter Grade No.2 (A|B|C|D|F) :";
	is>>b;
	cout<<"Enter Grade No.3 (A|B|C|D|F) :";
	is>>c;
	r.setGPA(a,b,c);
	return is;
}
class Teacher:virtual public Person{
	char Tid[20];
	char faculty[80];
	char department[80];
	float salary;
	public:
		Teacher():Person(){
			setTeacher("0000","None","None",0.0);
		}
		Teacher(char *i, char *n, char *m, char *t, char *f, char *d, float s):Person(i,n,m){
			setTeacher(t,f,d,s);
		}
		/*Teacher(char *i, char *n, char *m, char *t, char *f, char *d, float s){
			setName(i,n,m);
			setTeacher(t,f,d,s);
		}*/
		~Teacher(){
			//delete
			cout<<"bye Teacher"<<endl;
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
		}
		friend ostream& operator << (ostream& os, const Teacher &r);
		friend istream& operator >> (istream& is, Teacher &r);
};
ostream& operator << (ostream& os, const Teacher &r){
	os<<"Teacher ID : "<<r.Tid<<endl<<"Faculty : "<<r.faculty<<endl<<"Department : "<<r.department<<endl<<"Salary : "<<r.salary<<endl;
	return os;
}
istream& operator >> (istream& is, Teacher &r){
	cout<<"Enter Teacher ID : ";
	is>>r.Tid;
	cout<<"Enter Faculty : ";
	is>>r.faculty;
	cout<<"Enter Department : ";
	is>>r.department;
	cout<<"Enter Salary : ";
	is>>r.salary;
	return is;
}
class TA: public Student, public Teacher{
	char courses[80];
	char education[80];
	public:
		TA(){
			setTA("None","None");
		}
		TA(char *Pid, char *fname, char *lname){
			setName(Pid,fname,lname);
			setTeacher("None","None","None",0.00);
			setTA("None","None");
		}
		TA(char *Pid, char *fname, char *lname, char *id, char *fac, char *dep){
			setName(Pid,fname,lname);
			setTeacher(id,fac,dep,0.00);
			setTA("None","None");
		}
		TA(char *Pid, char *fname, char *lname, char *id, char *fac, char *dep, char sal){
			setName(Pid,fname,lname);
			setTeacher(id,fac,dep,sal);
			setTA("None","None");
		}
		/*TA(char *Pid, char *fname, char *lname, char *id, char *fac, char *dep, float sal, char *cou, char *edu){
			setName(Pid,fname,lname);
			setTeacher(id,fac,dep,sal);
			setTA(cou,edu);
		}*/
		/*TA(char *Pid, char *fname, char *lname, char *id, char *fac, char *dep, float sal, char *cou, char *edu):Teacher(Pid,fname,lname,id,fac,dep,sal){
			setTA(cou,edu);
		}*/
		TA(char *Pid, char *fname, char *lname, char *id, char *fac, char *dep, float sal, char *cou, char *edu):Person(Pid,fname,lname),Teacher(Pid,fname,lname,id,fac,dep,sal),Student(Pid,fname,lname,id,fac,dep){
			setTA(cou,edu);
		}
		~TA(){
			cout<<"bye TA"<<endl;
		}
		void setTA(char *co, char *edu){
			strcpy(courses,co);
			strcpy(education,edu);
		}
		void showTA(){
			showPerson();
			cout<<"TA ID = "<<getTid()<<endl;
			cout<<"Faculty = "<<Teacher::getFaculty()<<endl;
			cout<<"Department = "<<Teacher::getDepartment()<<endl;
			cout<<"Salary = "<<getSalary()<<endl;
			cout<<"Age = "<<checkAge()<<endl;
			cout<<"Courses = "<<courses<<endl;
			cout<<"Education = "<<education<<endl;
			cout<<"GPA = "<<getGPA()<<endl;
		}
		friend ostream& operator << (ostream& os, const TA &r);
		friend istream& operator >> (istream& is, TA &r);
};
ostream& operator << (ostream& os, const TA &r){
	os<<"Courses : "<<r.courses<<endl<<"Education : "<<r.education<<endl;
	return os;
}
istream& operator >> (istream& is, TA &r){
	cout<<"Enter Courses : ";
	is>>r.courses;
	cout<<"Enter Education : ";
	is>>r.education;
	return is;
}
int main()
{
	TA C("10002530215","Tim","Cook","5505002000","Science","Computer",10000,"OOP","Master of Science in Computer Science");
	C.setDa(1,11,2530);
	C.setAd("1/12 Nawamin","Nawamin 20","Nawamin Road","Bangkapi","Bangkok","Thailand","10240");
	C.setGPA('A','A','A');
	//C.showTA();
	cout<<"\n==========================================="<<endl;
	/*Person r1;
	Student r2;
	Teacher r3;
	TA r4;
	cin>>r1>>r2>>r3>>r4;
	cout<<"\n==========================================="<<endl;
	cout<<r1<<r2<<r3<<r4;*/
	Person r1;
	cin>>r1;
	cout<<r1;
}
