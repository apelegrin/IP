#include <iostream>
#include <cmath>

using namespace std;

int main () {
	/* Léxico */
	const char MF='#';
	// Distancia entre los juegos de caracteres mayúsculas y minúsculas:
	const int distancia = int('a') - int('A');
	char EA_S; //Secuencia de entrada
	char EA_R; //Secuencia de salida
	
	cin >> EA_S; //Comenzar;
	//{ Inicialización del tratamiento }*
	while (EA_S != MF){	//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		if ((EA_S >= 'a') && (EA_S <= 'z')){
			//Si restamos la distancia convertimos
			EA_R = char(int(EA_S) - distancia);
		}else{
			EA_R = EA_S;
		}
		cout << EA_R; //Registrar
		cin >> EA_S; //Avanzar
	}			//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
	
	
	
}



