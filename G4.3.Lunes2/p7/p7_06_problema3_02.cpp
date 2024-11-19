/* Elementos coincidentes en tabla no marcada */

#include <iostream>
using namespace std;

const int N = 20;

typedef int Vector [N];

void borrarTabla(Vector &t){
     int i;
     for (i = 0; i < N; i++){
		t[i] =0;
	 }
}

int main(){
	/* Léxico */
	const int N1 = 13; //Elementos de S1
	const int N2 = 17; //Elementos de S1
	Vector S1 = { -44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101 };
    Vector S2 = { -32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200 };
    Vector R;
    int i,j,k;
    /* Comenzar */
    i=0;
    j=0;
    k=0;
    borrarTabla(R);
    while ((i < N1) && (j < N2)){ //Mientras no Fin S1 y no Fin S2
		//Si son iguales
		if (S1[i] == S2[j]){
			R[k] = S1[i];
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


