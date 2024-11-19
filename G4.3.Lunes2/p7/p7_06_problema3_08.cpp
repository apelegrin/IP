/* Unión de dos secuencias de forma ordenada sin MF   */
/* incorporando únicamente los elementos no repetidos */
/* en ambas secuencias                                */

#include <iostream>
using namespace std;

const int N = 50;

typedef int Vector [N];

void borrarTabla(Vector &t){
     int i;
     for (i = 0; i < N; i++){
		t[i] =0;
	 }
}

int main(){
    const int N1 = 20;
    const int N2 = 17;
	/* Léxico */
	Vector S1 = { -44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101, 70, 80, 90, 110, 115, 120, 400 };
    Vector S2 = { -32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200 };
    Vector R;
    int i,j,k,posi;
    /* Comenzar */
    i=0;
    j=0;
    k=0;
    borrarTabla(R);
    while ((i < N1) && (j < N2)){ //Mientras no Fin S1 y no Fin S2
		//Si son iguales
		if (S1[i] == S2[j]){
			i = i + 1;
			j = j + 1;
		}
		else if (S1[i] < S2[j]){
			R[k] = S1[i]; //Registrar
			i = i + 1;
			k = k + 1;
		}
		else {
			R[k] = S2[j]; //Registrar
			j = j + 1;
			k = k + 1;
		}
	}
	/* Copiar el resto */
	if (i == N1){ //Si S1 fin copiar S2
		for (posi=j; posi < N2; posi++){
			R[k] = S2[posi]; //Registrar
			k = k + 1;
		}
	}
	else { //Copiar S1
		for (posi=i; posi < N1; posi++){ //Mientras no esUltimo S1
			R[k] = S1[posi]; //Registrar
			k = k + 1;
		}
	}
	/* Imprimir tabla */
    for (i=0; i < k-1; i++){
		cout << R[i] << ", ";
	}
	cout << R[i] << endl;
    
}


