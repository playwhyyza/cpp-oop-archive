template<class atype>
int find(atype *array, atype value, int size){
	for(int j=0; j<size; j++){
		if(array[j] == value)
			return j;
		return -1;
	}
}
char charArr[] = {1,2,3,4,5};
char ch = 5;
int intArr[] = {1,2,3,4,5};
int in = 6;
long longArr[] = {1L,2L,3L,4L,5L};
long lo = 3L;
double dubArr[] = {1.0,2.0,3.0,4.0,5.0};
double db = 12.0;
void main(){
	cout<<find(chrArr, ch, 5);
	cout<<find(intArr, in, 5);
	cout<<find(longArr, lo, 5;
	cout<<find(dubArr, db, 5;
}