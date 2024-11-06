
#include <iostream>
using namespace std;
int main()
{
	/* Léxico */
	const int MF = -100;

	int EA_S; //Secuencia de entrada (S)
	int EA_R; //Secuencia de salida (R)
	
	cin >> EA_S; //Comenzar (S);
    //{ Inicialización del tratamiento }
    while (EA_S != MF){ //MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		EA_R = EA_S * EA_S;
		cout << EA_R << ' ';//Registrar (R)
		
		cin >> EA_S;//Avanzar (S)
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << MF; //Marcar(R)

}
