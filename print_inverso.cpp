#include <iostream>
using namespace std;
void print_matriz(int **m, int n){
	int **p= m;
	int *q=*m;
	int x=0;
	while(x<n){
		while(p<m+n){
			q=*p;
			cout<<*(q+x)<<"\t";
			p++;
		}
		p=m;
		x++;
		cout<<"\n";
	}
}
int main() {
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int **arr= new int *[3];
	for(int i=0;i<3;i++){
		arr[i]=matriz[i];
	}
	print_matriz(arr,3);
	return 0;
}
