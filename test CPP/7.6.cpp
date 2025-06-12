#include <iostream>
using namespace std;
const int MAX = 100;
class MyArray{
	int array[MAX];
	public:
		MyArray(){
			for(int i=0; i<MAX; i++)
				array[i] = 0;
		}
		int &operator[] (int n){
			if(n < 0 || n > MAX){
				cout<<"The index number is out of bound\n";
				exit(1);
			}
			return array[n];
		}
};
int main(){
	MyArray a, b;
	for(int i=0; i<3; i++){
		a[i] = i * 2;
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	for(int i=0; i<3; i++){
		b[i] = a[i] * 3;
		cout<<"b["<<i<<"] = "<<b[i]<<endl;
	}
	
}
