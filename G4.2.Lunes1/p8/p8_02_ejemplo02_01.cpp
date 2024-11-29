#include <iostream>
#include <fstream>

using namespace std;

const int NFILAS = 11; //1990..2000
const int NCOLUM = 8; //8 titulaciones

typedef float Matriz[NFILAS][NCOLUM]; //Matriz 11x8

void cargarFichero(Matriz &a,int nf, int nc, string nombre){
     ifstream f;
     int i,j;
     
     f.open(nombre);
     if(!f){
		 cout << "Error de apertura" << endl;
	 }else{
		 for (i=0;i<nf;i++){
			for (j=0;j<nc;j++){
				f >> a[i][j];
			}//end_column
		 }//end_filas
	 }
}

void leerMatriz(Matriz &a, int nf, int nc){
	int i,j;
	for (i=0;i<nf;i++){
		for (j=0;j<nc;j++){
			cout << "Dame el elemento ["<<i<<","<<j<<"] ";
			cin >> a[i][j];
		}//end_column
	}//end_filas
};
	
void imrpimirMatriz(Matriz a, int nf, int nc){
	int i,j;
	int ano;
	ano = 1990;
	for (i=0;i<nf;i++){
		cout << ano <<" [ ";
		for (j=0;j<nc;j++){
			if (a[i][j] < 100){
			  cout << "0";
			}
			cout << a[i][j] << " ";
		}//end_column
		cout << "]" << endl;
		ano = ano + 1;
	}//end_filas
};

int buscaMaxEgresados(Matriz a,int nf,int nc){
	int i, j;
	int anoMax, egreMax;
	int sumaAno;
	anoMax = 0;
	egreMax = 0;
	for (i=0; i < nf; i++){
		sumaAno = 0;
		for (j=0; j < nc; j++){
			sumaAno = sumaAno + a[i][j]; //sumamos todo el año
		}
		if (sumaAno > egreMax){
			egreMax = sumaAno;
			anoMax  = i; 
		}
	}
	return anoMax+1990;
}
int main() {
    /* Léxico */
    Matriz a;
    int anoMaxEgresados;
    int nc,nf;
    nf = NFILAS;
    nc = NCOLUM;
    
	cargarFichero(a,nf,nc ,"egresados.txt");
	imrpimirMatriz(a,nf,nc);

	anoMaxEgresados = buscaMaxEgresados(a,nf,nc);
	cout << "El año con max egresados " << anoMaxEgresados << endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
