#include <iostream>
#include <cmath>

using namespace std;

int main () {
	/* Léxico */
	const int MF=-1;
	
	int EA_S; //Secuencia de entrada
	int EA_R; //Secuencia de salida
	int suma;
	
	cin >> EA_S; //Comenzar;
	//{ Inicialización del tratamiento }*
	suma = 0;
	while (EA_S != MF){	//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		EA_R = suma + EA_S;
		suma = EA_R;
		cout << EA_R << ' '; //Registrar
		cin >> EA_S;  //Avanzar
	}			//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
	
}



