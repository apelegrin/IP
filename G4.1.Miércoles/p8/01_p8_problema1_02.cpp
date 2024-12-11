#include <iostream>
#include <fstream>

using namespace std;

const int NFilas = 50; /* constante con el número de filas */
const int NColumnas = 50; /* constante con el número de columnas */

typedef int Matriz[NFilas][NColumnas]; /*Tipo tabla*/

void cargarFichero (Matriz &S, int &NF, int &NC, string nombre) {
	ifstream f;
	int i, j;
	f.open (nombre);
	if (!f)
		cout << "Error abriendo el fichero" << endl;
	else {
		f >> NF;
		f >> NC;
		for (i=0; i < NF; i++) {
			for (j=0; j < NC; j++) {
				f >> S[i][j];
			}
		}
	}
	f.close();
}

void mostrarTabla(Matriz t, int nf, int nc){
	int i, j;
	int aa;
	aa = 1990;
	for (i = 0; i < nf; i++) {
		cout << aa << " | ";
		for (j = 0; j < nc; j++) {
			if (t[i][j] < 100){
				cout << "0" << t[i][j] << " ";
			}else{
				cout << t[i][j] << " ";	
			}
		}
		cout << endl;
		aa = aa + 1;
	}
}

void buscarMaxAlu(Matriz t, int nf, int nc, int &aaMax, int &aluMax){
	int i, j;
	int aa, mayor, suma, aaMayor;
	aa = 1990;
	
	mayor = 0;
	for (i = 0; i < nf; i++) {
		suma = 0;
		for (j = 0; j < nc; j++) {
				suma = suma + t[i][j];
		}
		if (suma > mayor){
			mayor = suma;
			aaMayor = i;
		}
	}
	aaMax = aa+aaMayor;
	aluMax = mayor;
}

int main(){
    Matriz t;
	int nf, nc;
	int aaMaxAlu, nAlu;
	
	cargarFichero(t,nf,nc,"egresados.txt");
	mostrarTabla(t,nf,nc);
	buscarMaxAlu(t,nf,nc,aaMaxAlu, nAlu);
	cout << "El año con más egresados es " << aaMaxAlu << endl;
	cout << "con un total de " << nAlu << endl;
}
