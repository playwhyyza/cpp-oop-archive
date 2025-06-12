#include <iostream>
#include <string.h>
using namespace std;

class Animal{
  int sex;
  int status;
  public:
    Animal(){
    	//cout<<"I'm Animal<<endl;
	}
	virtual ~Animal(){
		cout<<"bye Animal"<<endl<<"Sex : "<<sex<<endl<<"Status : "<<status<<endl;
	}
	Animal& operator = (const Animal &p){
		if(this == &p){
			return *this;
		}
		sex = p.sex;
		status = p.status;
	}
	Animal(Animal &q){
		sex = q.sex;
		status = q.status;
	}
	virtual void set(int se, int sta){
		sex = se;
		status = sta;	
	}
	int getSex(){
		return sex;
	}
	int getStatus(){
		return status;
	}
  	virtual void show()=0;
  	virtual void pirnt (ostream& os){
  		os<<"Sex : "<<sex<<endl<<"Status : "<<status<<endl;
	  }
};

class Human:virtual public Animal{
	char name[80];
	public:
		Human(){
			set(0,0,"noname");
		}
		Human(int sex, int sta, char* nam){
			set(sex,sta,nam);
		}
		~Human(){
			cout<<"bye Human"<<endl<<"Name : "<<name<<endl;
		}
		Human& operator = (const Human &p){
			if(this == &p){
				return *this;
			}
			Animal::operator =(p);
			strcpy(name,p.name);
		}
		Human(const Human &q){
			Animal::operator =(q);
			strcpy(name,q.name);
		}
		char* getName(){
			return name;
		}
		void set(int sex, int sta, char* nam){
			Animal::set(sex,sta);
			strcpy(name,nam);
		}
		void setName(char* nam){
			strcpy(name, nam);
		}
		void show(){
			//
		}
		void print(ostream& os){
			Animal::pirnt(os);
			os<<"Name : "<<name<<endl;
		}
};

class Horse:virtual public Animal{
	char color[80];
	public:
		Horse(){
			set(0,0,"None");
		}
		Horse(int sex, int sta, char* col){
			set(sex,sta,col);
		}
		~Horse(){
			cout<<"bye Horse"<<endl<<"Color : "<<color<<endl;
		}
		Horse& operator = (const Horse &p){
			if(this == &p){
				return *this;
			}
			strcpy(color,p.color);
		}
		Horse(const Horse &q){
			strcpy(color,q.color);
		}
		void set(int sex, int sta, char* col){
			Animal::set(sex,sta);
			strcpy(color, col);
		}
		void setColor(char* col){
			strcpy(color,col);
		}
		char* getColor(){
			return color;
		}
		void show(){
			//
		}
		void print(ostream& os){
			os<<"Color : "<<color<<endl;
		}
};

class BongHorse:public Horse, public Human{
	int type;
	public:
		static int num;
		BongHorse(){
			set("noname", "None", 1);
			num++;
		}
		BongHorse(char* nam, char* col, int typ){;
			set(nam, col, typ);
			num++;
		}
		~BongHorse(){
			cout<<"bye BongHorse"<<endl<<"Type : "<<type<<endl;
			//num--;
		}
		BongHorse& operator = (const BongHorse&p){
			if(this == &p){
				return *this;
			}
			Human::operator =(p);
			Horse::operator =(p);
			type = p.type;
		}
		BongHorse(const BongHorse &q){
			Human::operator =(q);
			Horse::operator =(q);
			type = q.type;
		}
		void set(char* nam, char* col, int typ){
			Animal::set(0,2);
			setName(nam);
			setColor(col);
			type = typ;
		}
		void setData(char* nam, char* col){
			setName(nam);
			setColor(col);
		}
		void setData(char* nam, char* col, int typ){
			set(nam, col, typ);
		}
		int getType(){
			return type;
		}
		void show(){
			//
		}
		void print(ostream& os){
			Human::print(os);
			Horse::print(os);
			os<<"Type : "<<type<<endl;
		}
		static int count(){
			return num;
		}
};
ostream& operator << (ostream& os, BongHorse &r){
	r.print(os);
	return os;
}
int BongHorse::num;

class Centaur: public Horse, public Human{
	int type;
	public:
		Centaur(){
			set("noname", "None", 1);
		}
		Centaur(char* nam, char* col, int typ){
			set(nam, col, typ);
		}
		~Centaur(){
			cout<<"bye Centaur"<<endl<<"Type"<<type<<endl;
		}
		Centaur& operator = (const Centaur&p){
			if(this == &p){
				return *this;
			}
			Human::operator =(p);
			Horse::operator =(p);
			type = p.type;
		}
		Centaur(const Centaur &q){
			Human::operator =(q);
			Horse::operator =(q);
			type = q.type;
		}
		Centaur operator + (Centaur m){
			if((m.getStatus() && getStatus() ) == 1){
				return *this;
			}
			else if((m.getStatus() && getStatus()) == 2){
				m.setData(1,1);
				return *this;
			}
		}
		void set(char* nam, char* col, int typ){
			Animal::set(1,2);
			setName(nam);
			setColor(col);
			type = typ;
		}
		void setData(char* nam, char* col){
			setName(nam);
			setColor(col);
		}
		void setData(char* nam, char* col, int typ){
			set(nam, col, typ);
		}
		void setData(int sta, int typ){
			Animal::set(1,sta);
			type = type;
		}
		int getType(){
			return type;
		}
		void show(){
			//
		}
		void print(ostream& os){
			Human::print(os);
			Horse::print(os);
			os<<"type : "<<type<<endl;
		}
};
ostream& operator << (ostream& os, Centaur &r){
	r.print(os);
	return os;
}

int main(){
  //Animal a;
  Human m;
  Horse h;
  BongHorse bh;
  Centaur c;
  
  Animal *p[4];
  p[0] = &m;
  p[1] = &h;
  p[2] = &bh;
  p[3] = &c;
  
  p[0]->set(1,1,"M");
  p[1]->set(1,1,"Black");
  p[2]->set("sss","Red",1);
  p[3]->set("eee","Yellow",0);
  cout<<"Obj : "<<BongHorse::num<<endl;
}
