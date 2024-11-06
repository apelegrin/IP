
#include <iostream>
using namespace std;
int main()
{
	/* Léxico */
	const float MF = -1.0;

	float EA_S; //Secuencia de entrada (S)
	int contador;
	
	cin >> EA_S; //Comenzar (S);
    //{ Inicialización del tratamiento }
    contador = 0;
    while (EA_S != MF){ //MIENTRAS EA ≠ MarcaFin HACER
		//{ Tratamiento de EA }
		if (EA_S >= 5){
			contador = contador + 1;
		}
		cin >> EA_S;//Avanzar (S)
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }
	cout << "El número de aprobados es " << contador << endl;

}
