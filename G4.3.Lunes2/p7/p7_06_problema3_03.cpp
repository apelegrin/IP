/* Elementos coincidentes en tabla no marcada */

#include <iostream>
using namespace std;

const int N = 20;
const int MF = -100;

typedef int Vector [N];

void borrarTabla(Vector &t){
     int i;
     for (i = 0; i < N; i++){
		t[i] =0;
	 }
}

int main(){
	/* Léxico */
	Vector S1 = { -44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101, -100 };
    Vector S2 = { -32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200, -100 };
    Vector R;
    int i,j,k;
    /* Comenzar */
    i=0;
    j=0;
    k=0;
    borrarTabla(R);
    while ((S1[i] != MF) && (S2[j] != MF)){ //Mientras no Fin S1 y no Fin S2
		//Si son iguales
		if (S1[i] == S2[j]){
			R[k] = S1[i]; //Registrar
			i = i + 1;
			j = j + 1;
			k = k + 1;
		}
		else if (S1[i] < S2[j]){
			i = i + 1;
		}
		else {
			j = j + 1;
		}
	}
	/* Imprimir tabla */
    for (i=0; i < k; i++){
		cout << R[i] << ", ";
	}
    
}


