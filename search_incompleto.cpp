#include <iostream>
using namespace std;
int* search(int **m, int f,int c, int v){
	int **p= m;
	int *q=nullptr;
	while(p<m+f){
		q=*p;
		while(q<*p+c){
			if(*q == v)return q;
			q++;
		}
		cout<<"\n";
		p++;
	}
	return NULL;
}
int main() {
	int matriz[4][3]={{36,14,21},{19,78,54},{43,37,67},{56,31,10}};
	int **arr= new int *[4];
	for(int i=0;i<4;i++){
		arr[i]=matriz[i];
	}
	int *resultado = search(arr, 4, 3,14);
	(resultado != NULL)? cout <<"\npos -> "<< resultado :cout<<"no encontrado";
	return 0;
}
