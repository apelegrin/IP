
#include <iostream>
using namespace std;
int main()
{
	/* Léxico */
	const char MF = '#';
	const int DISTANCIA = int('a') - int('A');

	char EA_S; //Secuencia de entrada (S)
	char EA_R; //Secuencia de salida (R)
	
	cin.get(EA_S); //Comenzar (S);
    //{ Inicialización del tratamiento }
    while (EA_S != MF){ //MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		if ((EA_S >= 'a') && (EA_S <= 'z')){
			EA_R = EA_S - DISTANCIA;
		}
		else{
			EA_R = EA_S;
		}
		cout << EA_R;//Registrar (R)
		
		cin.get(EA_S);//Avanzar (S)
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << MF; //Marcar(R)

}
