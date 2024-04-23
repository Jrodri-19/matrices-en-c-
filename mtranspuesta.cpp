#include <iostream>
using namespace std;

int** t_matriz(int **m, int n) {
	int **mat = new int*[n];
	for (int i = 0; i < n; ++i) {
		mat[i] = new int[n];
	}
	int **p = m;
	int *q = nullptr;
	int **m_p = mat;
	int *m_q = nullptr;
	int cont = 0;
	while (p < m + n) {
		q = *p;
		while (q < *p + n) {
			m_q = *m_p + cont;
			*m_q = *q;
			q++;
			m_p++;
		}
		m_p = mat;
		p++;
		cont++;
	}
	return mat;
}

void print_matriz(int **m, int f, int c) {
	int **p = m;
	while (p < m + f) {
		int *q = *p;
		while (q < *p + c) {
			cout << *q++ << "\t";
		}
		cout << "\n";
		p++;
	}
}

int main() {
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int **arr = new int*[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = matriz[i];
	}
	int **resultado = t_matriz(arr, 3);
	print_matriz(resultado, 3, 3);
	
	// Liberar memoria de resultado y arr
	for (int i = 0; i < 3; i++) {
		delete[] resultado[i];
		delete[] arr[i];
	}
	delete[] resultado;
	delete[] arr;
	
	return 0;
}
