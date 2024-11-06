#include <iostream>

using namespace std;
		
int main() {
    /* Léxico */
    const int N=20;
    const char MF = '#';
    typedef char Frase[N];
	int i,contador;
	//Declaración e inicialización de la tabla t
	Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
	
	//{ Inicialización del tratamiento }
	contador = 0;
	i = 0; //Comenzar
	while (t[i] != MF){ //MIENTRAS EA T[i] ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		cout << t[i]; //Imprimir EA
		if(t[i] == 'E'){
		   contador = contador + 1;
		}
		i = i + 1 ;//Avanzar
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
	cout << endl;
    cout << "Encontrado "<<contador<<" E"<<endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
