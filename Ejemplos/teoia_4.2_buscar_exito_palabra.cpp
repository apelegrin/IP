#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const char MF = '#';
	const char EB = ' ';
	char EA_S;
	int l;
	/* Algoritmo */
	//buscar inicio palabra
    cin.get(EA_S); //Comenzar (S);
	while (EA_S == EB){
		cin.get(EA_S);
	}
	l = 1;
	cin.get(EA_S); //Comenzar (S);
	while ((EA_S != MF) && (EA_S != EB)){
		l = l + 1;
		cin.get(EA_S);
	}
	cout << "Longitud " << l << endl;
	
}


