#include <iostream>
using namespace std;
int dsum(int **m, int f,int c){
	int **p= m;
	int x=0;
	int *q=nullptr;
	int suma=0;
	while(p<m+c){
		q=*p+c-1;
		suma+=*(q-x);
		cout<<suma<<"\n";
		p++;
		x++;

	}
	return suma;
}
int main() {
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int **arr= new int *[3];
	for(int i=0;i<3;i++){
		arr[i]=matriz[i];
	}
	cout<< dsum(arr, 3, 3);
	
	return 0;
}
