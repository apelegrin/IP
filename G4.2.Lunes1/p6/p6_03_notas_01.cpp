#include <iostream>

using namespace std;
	
int main (){
	/* Léxico */
	const float MF=-1;
	float EA;
	int aprobados;
	
	cin >> EA; //Comenzar;
	//{ Inicialización del tratamiento }
	aprobados = 0.0;
	//MIENTRAS EA ≠ MarcaFin HACER
	while (EA != MF){
		//{ Tratamiento de EA }
		if (EA >= 5.0){
		   aprobados = aprobados + 1;
		}
		cin >> EA; //Avanzar
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << "El número de aprobados es " << aprobados << endl;
}
	
	
	
	
	
	
	
	
	
