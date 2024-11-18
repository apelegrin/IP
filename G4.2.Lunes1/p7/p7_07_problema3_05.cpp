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

/* Imprimir todos los valores de forma ordenada guardando en la tabla R1 */
/* Utilizar marca de fin */
int main () {
	int i, j, k;
	Vector S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101, -100 };
	Vector S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200, -100};
    Vector R1;
    i=0;
    j=0;
    k=0;
    inicializar(R1);
    while ((S1[i] != MF) && (S2[j] != MF)){
		if (S1[i] < S2[j]){
			R1[k] = S1[i];
			i = i +1;
			k = k + 1;
		}else if (S1[i] == S2[j]){
			R1[k] = S1[i];
			i = i + 1;
			j = j + 1;
			k = k + 1;
		}else {
			R1[k] = S2[j];
			j = j + 1;
			k = k + 1;
		}
	}
	
	if (S1[i] == MF){
		//Se ha terminado S1
		//Volcar S2
		while (S2[j] != MF){
			   R1[k] =  S2[j];
			   j = j + 1;
			   k = k + 1;
		}
	}else{
	   //Se ha terminado S2
	   //Volcar S1
	   while (S1[i] != MF){
			   R1[k] = S1[i];
			   i = i + 1;
			   k = k + 1;
	   }
	}
	//Marcar R1 con fin
	R1[k] = MF;
	
	//Imprimir secuencia de salida R1
	i=0;
	while (R1[i] != MF){
          cout << R1[i] << ", ";
          i = i + 1;
    }
}
