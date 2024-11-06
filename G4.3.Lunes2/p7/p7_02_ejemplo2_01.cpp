#include <iostream>
using namespace std;

const int N = 200;
typedef char Frase [N];



int main () {
  /* Léxico */
    const char MF = '#';
	int i;
	int cont;
	//Declaración e inicialización de la tabla t
	Frase EA_S = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
	
	//{Inicialización del tratamiento }
	cont = 0;
	i = 0; //Comenzar
	while (EA_S[i] != MF){ //MIENTRAS NO FDS HACER
		//{ Tratamiento de EA }
		cout << EA_S[i] << endl;
		if (EA_S[i] == 'E'){
				cont = cont + 1;
		}
		i = i + 1;//Avanzar
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << "Encontradas " << cont << endl;
}








