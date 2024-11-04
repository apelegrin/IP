#include <iostream>

using namespace std;
	
int main() {
	/* Léxico*/
    const char MF = '#';
    const int DIFERENCIA = int('a') - int('A'); // 97 - 65 = 32
    
    char EA_S;
    char EA_R;
    
	cin >> EA_S; //Comenzar;
	//{ Inicialización del tratamiento }*
	while (EA_S != MF){ 		//MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		//Si es minúscula convertir
		if ((EA_S >= 'a') && (EA_S <= 'z')){ 
		    EA_R = EA_S - DIFERENCIA;
		}else{
			EA_R = EA_S;
		}
		cout << EA_R; //Registrar
		cin >> EA_S; 		 //Avanzar
	}							//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << MF;
	return 0;
}
	
	
	
	
	
	
	
	
	
