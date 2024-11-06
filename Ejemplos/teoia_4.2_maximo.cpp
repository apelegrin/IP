#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const int MF = -1;
	int EA_S;
	int max;
	/* Algoritmo */
    cin >> EA_S; //Comenzar (S);
	if (EA_S == MF){
		cout << "Secuencia vacía" << endl;
	}else {
		max = EA_S;
		do { //ITERAR
			cin >> EA_S; //Avanzar (S)
			if (EA_S == MF){ break;}
			if (EA_S > max){
				max = EA_S;
			}
		} while (true); //FIN_ITERAR;
		cout << "Máximo " << max << endl;
	}
}


