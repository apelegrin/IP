#include <iostream>
#include <cmath>

using namespace std;

int main () {
	/* Léxico */
	const int MF=-100;
	
	int EA_S; //Secuencia de entrada
	int EA_R; //Secuencia de salida
	
	cin >> EA_S; //Comenzar;
	//{ Inicialización del tratamiento }*
	while (EA_S != MF){	//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		EA_R = EA_S * EA_S;
		cout << EA_R << ' '; //Registrar
		cin >> EA_S;  //Avanzar
	}			//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
	
}



