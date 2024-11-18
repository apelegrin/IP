#include <iostream>
using namespace std;

const int N = 50;
const int MF = -100;
typedef float Vector [N];

void inicializar(Vector &R1){
	int i;
	for (i = 0; i < N; i++){
		R1[i] = 0;
	}
}

/* Imprimir todos los valores que pertencena S1 y S2 */
int main () {
	int i, j, k;
	Vector S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101 };
	Vector S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200};
	Vector R1;
    i=0;
    j=0;
    k=0;
    inicializar(R1);
    
    while ((S1[i] != MF) && (S2[j] != MF)){
		if (S1[i] < S2[j]){
			i++;
		}else if (S1[i] == S2[j]){
			//cout << S1[i] << ", ";
			//Almacenar en R1 uno de los coincidentes
			R1[k] = S1[i]; //también R1[k] = S2[j]
			i++;
			j++;
			k++;
		}else {
			j++;
		}
	}
	//Marcar R1 con fin de secuencia
	R1[k] = -100;
	for (i = 0; i < N;i++){
		cout << R1[i] << ", ";
	}
}
