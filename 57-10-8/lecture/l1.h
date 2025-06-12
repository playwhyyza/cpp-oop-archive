template<class T>
T abs(T n){
	return (n<0)?-n:n;
}
void main(){
	int int1 = 5;
	long long1 = 70000L;
	double dub1 = -9.99;
	cout<<abs(int1)<<endl;
	cout<<abs(long1)<<endl;
	cout<<abs(dub1)<<endl;
}