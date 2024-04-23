#include <iostream>
using namespace std;
void print_matriz(int **m, int f,int c){
	int **p= m;
	int *q=nullptr;
	while(p<m+f){
		q=*p;
		while(q<*p+c){
			cout<<*q++<<"\t";
		}
		cout<<"\n";
		p++;
	}
}
int main() {
	int matriz[4][3]={{36,14,21},{19,78,54},{43,37,67},{56,31,10}};
	int **arr= new int *[4];
	for(int i=0;i<4;i++){
		arr[i]=matriz[i];
	}
	print_matriz(arr, 4, 3);
	return 0;
}
