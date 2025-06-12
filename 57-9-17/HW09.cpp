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
		Date& operator = (const Date &p){
			if(this == &p)
				return *this;
			day = p.day;
			month = p.month;
			year = p.year;
			return *this;
		}
		Date(const Date &q){
			cout<<"copy constructor of Date is called"<<endl;
			day = q.day;
			month = q.month;
			year = q.year;
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
		void print(ostream & os){
			os<<"D/M/Y = "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void input(istream &is){
			cout<<"Enter Day : ";
			is>>day;
			cout<<"Enter Month : ";
			is>>month;
			cout<<"Enter Year : ";
			is>>year;
		}
};
ostream& operator << (ostream &os, Date &r){
	r.print(os);
	return os;
}
istream& operator >> (istream &is, Date &r){
	r.input(is);
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
		Address& operator = (const Address &p){
			if(this == &p)
				return *this;
			strcpy(village,p.village);
			strcpy(soi,p.soi);
			strcpy(road,p.road);
			strcpy(district,p.district);
			strcpy(province,p.province);
			strcpy(country,p.country);
			strcpy(postal,p.postal);
		}
		Address(const Address &q){
			cout<<"copy constructor of Address is called"<<endl;
			strcpy(village,q.village);
			strcpy(soi,q.soi);
			strcpy(road,q.road);
			strcpy(district,q.district);
			strcpy(province,q.province);
			strcpy(country,q.country);
			strcpy(postal,q.postal);
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
		void printAddress(){
			cout<<"Address = "<<village<<" "<<soi<<" "<<road<<" "<<district<<" "<<province<<" "<<country<<" "<<postal<<endl;
		}
		void print(ostream &os){
			os<<"Address = "<<village<<" "<<soi<<" "<<road<<" "<<district<<" "<<province<<" "<<country<<" "<<postal<<endl;
		}
		void input(istream &is){
			cout<<"Enter village : ";
			is>>village;
			cout<<"Enter soi : ";
			is>>soi;
			cout<<"Enter road : ";
			is>>road;
			cout<<"Enter district : ";
			is>>district;
			cout<<"Enter province : ";
			is>>province;
			cout<<"Enter country : ";
			is>>country;
			cout<<"Enter postal : ";
			is>>postal;
		}
};
ostream& operator << (ostream& os, Address &r){
	r.print(os);
	return os;
}
istream& operator >> (istream& is, Address &r){
	r.input(is);
	return is;
}
class Person{
	char Pid[20];
	char fname[20];
	char lname[20];
	Date Da;
	Address Ad;
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
		Person& operator = (const Person &p){
			if(this == &p)
				return *this;
			strcpy(Pid,p.Pid);
			strcpy(fname,p.fname);
			strcpy(lname,p.lname);
			Da = p.Da;
			Ad = p.Ad;
		}
		Person(const Person &q){
			strcpy(Pid,q.Pid);
			strcpy(fname,q.fname);
			strcpy(lname,q.lname);
			Da = q.Da;
			Ad = q.Ad;
		}
		void setName(char *i, char *n, char *m){
			strcpy(Pid,i);
			strcpy(fname,n);
			strcpy(lname,m);
			checkAge();
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
			Ad.printAddress();
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
			return (year + 543) - Da.getYear();
		}
		void print(ostream& os){
			os<<"Public ID : "<<Pid<<endl<<"Name : "<<fname<<" "<<lname<<endl;
			Da.print(os);
			Ad.print(os);
		}
		void input(istream& is){
			cout<<"Enter Public ID : ";
			is>>Pid;
			cout<<"Enter First Name : ";
			is>>fname;
			cout<<"Enter Last Name : ";
			is>>lname;
			Da.input(is);
			Ad.input(is);
		}
};
ostream& operator << (ostream& os, Person &r){
	r.print(os);
	return os;
}
istream& operator >> (istream& is, Person &r){
	r.input(is);
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
		Student& operator = (const Student &p){
			if(this == &p)
				return *this;
			Person::operator =(p);
			strcpy(Sid,p.Sid);
			strcpy(faculty,p.faculty);
			strcpy(department,p.department);
			gpa = p.gpa;
		}
		Student(const Student &q){
			cout<<"copy constructor of Student is called"<<endl;
			Person::operator =(q);
			strcpy(Sid,q.Sid);
			strcpy(faculty,q.faculty);
			strcpy(department,q.department);
			gpa = q.gpa;
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
			cout<<"Age = "<<checkAge()<<endl;
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
		void print(ostream &os){
			Person::print(os);
			os<<"Student ID : "<<Sid<<endl;
			os<<"Faculty : "<<faculty<<endl;
			os<<"Department : "<<department<<endl;
			os<<"GPA : "<<gpa<<endl;
			os<<"Age : "<<checkAge()<<endl;
		}
		void input(istream &is){
			char a,b,c;
			Person::input(is);
			cout<<"Enter Student ID : ";
			is>>Sid;
			cout<<"Enter Faculty : ";
			is>>faculty;
			cout<<"Enter Department : ";
			is>>department;
			cout<<"Enter GPA No.1 (A|B|C|D) : ";
			is>>a;
			cout<<"Enter GPA No.2 (A|B|C|D) : ";
			is>>b;
			cout<<"Enter GPA No.3 (A|B|C|D) : ";
			is>>c;
			setGPA(a,b,c);
		}
};
ostream& operator << (ostream& os, Student &r){
	r.print(os);
	return os;
}
istream& operator >> (istream& is, Student &r){
	r.input(is);
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
		Teacher& operator = (const Teacher &p){
			if(this == &p)
				return *this;
			Person::operator =(p);
			strcpy(Tid,p.Tid);
			strcpy(faculty,p.faculty);
			strcpy(department,p.department);
			salary = p.salary;
		}
		Teacher(const Teacher &q){
			cout<<"copy constructor of Teacher is called"<<endl;
			Person::operator =(q);
			strcpy(Tid,q.Tid);
			strcpy(faculty,q.faculty);
			strcpy(department,q.department);
			salary = q.salary;
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
		void print(ostream &os){
			Person::print(os);
			os<<"Teacher ID : "<<Tid<<endl;
			os<<"Faculty : "<<faculty<<endl;
			os<<"Department : "<<department<<endl;
			os<<"Salary : "<<salary<<endl;
			os<<"Age : "<<checkAge()<<endl;
		}
		void input(istream &is){
			Person::input(is);
			cout<<"Enter Teacher ID : ";
			is>>Tid;
			cout<<"Enter Faculty : ";
			is>>faculty;
			cout<<"Enter Department : ";
			is>>department;
			cout<<"Enter Salary : ";
			is>>salary;
		}
};
ostream& operator << (ostream& os, Teacher &r){
	r.print(os);
	return os;
}
istream& operator >> (istream& is, Teacher &r){
	r.input(is);
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
		TA& operator = (const TA &p){
			if(this == &p)
				return *this;
			//Person::operator =(p);
			Student::operator =(p);
			Teacher::operator =(p);
			strcpy(courses,p.courses);
			strcpy(education,p.education);
		}
		TA(const TA &q){
			cout<<"copy constructor of TA is called"<<endl;
			Person::operator =(q);
			Student::operator =(q);
			Teacher::operator =(q);
			strcpy(courses,q.courses);
			strcpy(education,q.education);
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
		void print(ostream &os){
			//Student::print(os);
			Teacher::print(os);
			os<<"Courses : "<<courses<<endl;
			os<<"Education : "<<education<<endl;
		}
		void input(istream &is){
			//Student::input(is);
			Teacher::input(is);
			cout<<"Enter Courses : ";
			is>>courses;
			cout<<"Enter Education : ";
			is>>education;
		}
};
ostream& operator << (ostream& os, TA &r){
	r.print(os);
	return os;
}
istream& operator >> (istream& is, TA &r){
	r.input(is);
	return is;
}
int main()
{
	TA r1;
	cin>>r1;
	cout<<"*****************************************"<<endl;
	cout<<r1;
}
