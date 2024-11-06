#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const char MF = '#';
	const char EB = 'A';
	char EA_S;
	/* Algoritmo */
    cin >> EA_S; //Comenzar (S);
	while (EA_S != EB){
		cin >> EA_S;
	}
	if (EA_S == MF){
		cout << "NO encontrado" << endl;
	} else {
		cout << "Encontrado " << EB << endl;
	}
}


