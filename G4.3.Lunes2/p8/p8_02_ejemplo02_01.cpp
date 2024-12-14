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

int buscaTitAumenta(Matriz a,int nf,int nc){
	/* Léxico */
	bool encontrada;
	bool aumenta;
	int i,j;
	
	encontrada = false;
	j = 0;
	
	while ((j < nc) && (!encontrada)){
		aumenta = true;
		i = 1;
		while ((i < nf) && (aumenta)){
		   //Si los egresados actuales son < que año anterior	
		   if (a[i][j] < a[i-1][j]){ 
			  aumenta = false;
		   }
		   i = i + 1;
		}
		//si aumenta en todos los años la he encontrado
		if (aumenta){ 
			encontrada = true;
		}else{
			//si no buscamos en la siguiente
			cout << "La titulación " << j << " no aumenta" << endl;
		    j=j+1;
		}
	}//end_while
	//Si no encontrada devolvemos -1
	if (!encontrada) { j = - 1; }
	
	return j;
}

int main() {
    /* Léxico */
    Matriz a;
    int anoMaxEgresados;
    int nc,nf;
    int titau;
    nf = NFILAS;
    nc = NCOLUM;
    
	cargarFichero(a,nf,nc ,"egresados.txt");
	imrpimirMatriz(a,nf,nc);
   
	anoMaxEgresados = buscaMaxEgresados(a,nf,nc);
	titau = buscaTitAumenta(a,nf,nc);
	cout << "El año con max egresados " << anoMaxEgresados << endl;
	cout << "La titulación que aumenta es " << titau << endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
