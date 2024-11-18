#include <iostream>
using namespace std;

const int N = 20;
typedef char Frase [N];

bool esUltimo(int i,int N){
	bool ultimo;
	if (i == N-1){
		ultimo = true;}
	else{
		ultimo = false;}
	return ultimo;
}

int main () {
  /* Léxico */
	const char EB = 'D';
	int i;
	
	//Declaración e inicialización de la tabla t
	Frase EA_S = { 'E','L','_','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E',' ',' ',' '} ;
    i=0;
    while ( (i < N -1 ) && (EA_S[i] != EB) )	{
		//Tramiento
		cout << EA_S[i];
		//Avanzar
		i = i + 1;
    }
    cout << endl;
	if (i == N-1){
		cout << "Elemento no encontrado" << endl;}
	else{
		cout << "Elemento encontrado en "<< i << endl;}
	
}








