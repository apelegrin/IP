#include <iostream>

using namespace std;
	
int main() {
	/* Léxico*/
    const int MF = -1;
    
    int EA_S;
    int EA_R;
    
	cin >> EA_S; //Comenzar (S);
	//{ Inicialización del tratamiento }
	EA_R = 0;
	while (EA_S != MF){ 		//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		EA_R = EA_R + EA_S;
		cout << EA_R << ' ';//Registrar
		cin >> EA_S; //Avanzar (S)
	}							//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << MF; //Marcar
	return 0;
}
	
	
	
	
	
	
	
	
	
