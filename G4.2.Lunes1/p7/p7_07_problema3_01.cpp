#include <iostream>
using namespace std;

const int N = 50;
const int MF = -100;
typedef float Vector [N];

/* Imprimir todos los valores de forma ordenada */
int main () {
	int i, j;
	Vector S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101, -100 };
	Vector S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200, -100};
    i=0;
    j=0;
    while ((S1[i] != MF) && (S2[j] != MF)){
		if (S1[i] < S2[j]){
			cout << S1[i] << ", ";
			i++;
		}else if (S1[i] == S2[j]){
			cout << S1[i] << ", ";
			i++;
			j++;
		}else {
			cout << S2[j] << ", ";
			j++;
		}
	}
	/* Falta ver secuencia no acabada y volcarla */
	if (S1[i] == MF){
		//Se ha terminado S1
		//Volcar S2
		while (S2[j] != MF){
			   cout << S2[j] << ", ";
			   j = j + 1;
		}
	}else{
	   //Se ha terminado S2
	   //Volcar S1
	   while (S1[i] != MF){
			   cout << S1[i] << ", ";
			   i = i + 1;
	   }
	}
}
