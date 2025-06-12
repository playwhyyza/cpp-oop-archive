#include <iostream>
using namespace std;
const int MAX = 100;
class MyArray2{
	int a[MAX][MAX];
	public:
		MyArray2(){
			for(int i=0; i<MAX; i++)
				for(int j=0; j<MAX; j++)
					a[i][j] = 0;
		}
		int &operator()(int x, int y){
			if(x < 0 || x > MAX || y < 0 || y > MAX){
				cout<<"The index number is out of bound\n";
				exit(1);
			}
			return a[x][y];
		}
};
int main(){
	MyArray2 m;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			m(i,j) = i + j;
			cout<<m(i,j)<<" ";
		}
		cout<<endl;
	}
}
