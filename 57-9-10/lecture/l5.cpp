#include <iostream>
using namespace std;
class Point{
	int x,y;
	public:
		Point(int k, int l){
			x = k;
			y = l;
		}
	Point operator + (Point p){
		return Point(x + p.x, y + p.y);
	}
	friend Point operator - (Point p, Point q){
		return Point(p.x = q.x, p.y - q.y);
	}
	void print(){
		cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	}
};

int main(){
	Point P1(2,3), P2(4,5);
	cout<<"The point P1";
	P1.print();
	cout<<"The Point P2";
	P2.print();
	Point P3 = P1 + P2;
	//P3 = P1.operator + (P2);
	cout<<"The point P3 = P1 + P2: ";
	P3.print();
	Point P4 = P1 - P2; //P4 = operator - (P1,P2) friend function
	cout<<"The point P4 = P1 - P2: ";
	P4.print();
}
