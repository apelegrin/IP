#include <iostream>

using namespace std;

const int NFILAS = 20;
const int NCOLUM = 20;

typedef float Matriz[NFILAS][NCOLUM]; //Matriz 20x20
	
void leerMatriz(Matriz &a, int nf, int nc){
	int i,j;
	for (i=0;i<nf;i++){
		for (j=0;j<nf;j++){
			cout << "Dame el elemento ["<<i<<","<<j<<"] ";
			cin >> a[i][j];
		}//end_column
	}//end_filas
};
	
void imrpimirMatriz(Matriz a, int nf, int nc){
	int i,j;
	for (i=0;i<nf;i++){
		cout << "[ ";
		for (j=0;j<nf;j++){
			cout << a[i][j] << " ";
		}//end_column
		cout << "]" << endl;
	}//end_filas
};
		
int main() {
    /* Léxico */
    int nf, nc;
    int i, j;
    Matriz a;
    int mayorFila;
    int sumaMayores;
	
	cout << "Nº Filas    :";
	cin >> nf;
	cout << "Nº Columnas :";
	cin >> nc;
	
	leerMatriz(a,nf,nc);
	imrpimirMatriz(a,nf,nc);
    sumaMayores = 0;
    
    for (i=0;i<nf;i++){
		mayorFila = a[i][0];
		for (j=1;j<nf;j++){
			if (a[i][j] > mayorFila){
				mayorFila = a[i][j];
			}
		}//end_column
		sumaMayores = sumaMayores + mayorFila;
	}//end_fila
	cout << "La suma de los mayores es " << sumaMayores << endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
