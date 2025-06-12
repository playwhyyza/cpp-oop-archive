//The printing member function
#include <iostream>
using namespace std;
class A{
	public:
		void print(ostream *os); // ostream is class about output
};
void A::print(ostream *os){
	*os<<"A{"<<top<<","<<left<<","<<width>>","<<height<<"}";
}
int main(){
	A r;
	cout<<"the A is: ";
	r.print(&cout);
	cout<<"\n";
}