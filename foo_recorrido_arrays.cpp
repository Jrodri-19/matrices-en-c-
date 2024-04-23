#include <iostream>
using namespace std;
int** foo(int *a1, int n1,int *a2,int n2){
	int **mat=new int*[n1];
	for(int i=0;i<n1;++i){
		mat[i]=new int [n2];
	}
	int *p1=a1;
	int *p2=a2;
	int **p=mat;
	int *q=NULL;
	while(p1<a1+n1){
		q=*p;
		while(p2<a2+n2){
			*q=*p1+*p2;
			q++;
			p2++;
		}
		p1++;
		p2=a2;
		p++;
	};
	return mat;
}
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
	int arr1[]={15,18,20,1};
	int arr2[]={1,3,8};
	int**m= foo(arr1, 4, arr2,3);
	print_matriz(m,4,3);
	return 0;
}
