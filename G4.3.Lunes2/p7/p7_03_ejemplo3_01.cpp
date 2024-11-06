#include <iostream>
using namespace std;

const int N = 20;
typedef char Frase [N];



int main () {
  /* Léxico */
	int i;
	int conta;
	//Declaración e inicialización de la tabla t
	Frase EA_S = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E',' ',' ',' '} ;
	conta = 0;
	//for(comenzar;no FDS; avanzar)
	for (i=0; i < N; i++){ //Recorremos todos los ementos
		if (EA_S[i] == ' '){
			conta = conta + 1;
		}
	}
	cout << "Encontrados " << conta << endl;
	
}








