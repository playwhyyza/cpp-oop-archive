//The printing operator
ostream &operator << (ostream &os, A &r){ // operator << () is global function and could non-member of class
	r.print(&os)'
	return os;
}
int main(){
	A r;
	cout<<"the A is: ";
	cout<<r; // operator << (count, r)
	cout<<"\n";
}