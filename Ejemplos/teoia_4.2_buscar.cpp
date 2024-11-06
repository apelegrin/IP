#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const int MF = -1;
	const int EB = 6;
	int EA_S;
	/* Algoritmo */
    cin >> EA_S; //Comenzar (S);
	while ((EA_S != MF) && (EA_S != EB)){
		cin >> EA_S;
	}
	if (EA_S == MF){
		cout << "NO encontrado" << endl;
	} else {
		cout << "Encontrado " << EB << endl;
	}
}


