#include <iostream>

using namespace std;
	
int main() {
	/* Léxico*/
    const float MF = -1.0;
    
    float EA_S;
    int aprobados;
    
	cin >> EA_S; //Comenzar (S);
	//{ Inicialización del tratamiento }
	aprobados = 0;
	while (EA_S != MF){ 		//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		if (EA_S >= 5.0){
			aprobados = aprobados + 1;
		}
		cin >> EA_S; //Avanzar (S)
	}							//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << "Nº de aprobados " << aprobados << endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
