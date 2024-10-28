#include <iostream>

using namespace std;
	
int main (){
	/* Léxico */
	const int MF=-100;
	int EA;
	int EA_R;
	
	//cin >> EA; //Comenzar;
	cin >> EA;
	//MIENTRAS EA ≠ MarcaFin HACER
	while (EA != MF){
		//Invariante
		// ai (- Si ai = ei*ei
		//{ Tratamiento de EA }
		EA_R = EA* EA;
		cout << EA_R << ","; //Registrar
		cin >> EA; //Avanzar
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
}
	
	
	
	
	
	
	
	
	
