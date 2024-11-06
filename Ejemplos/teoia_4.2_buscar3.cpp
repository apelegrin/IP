#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const char MF = '#';
	const char EB = 'A';
    const int  x = 3; 
	char EA_S;
	int noc;
	/* Algoritmo */
    cin >> EA_S; //Comenzar (S);
    noc = 0;
	while ((EA_S != MF) && (noc <= x)){
		if (EA_S == EB){
			noc = noc + 1;
			cout << "encontrado " << endl;
		}	
		cin >> EA_S;
	}
	if (noc < x){
		cout << "NO encontrado" << endl;
	} else {
		cout << "Encontrado " << EB << endl;
	}
}


