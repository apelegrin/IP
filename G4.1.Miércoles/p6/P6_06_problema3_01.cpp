
#include <iostream>
using namespace std;
int main()
{
	/* Léxico */
	const int MF = -1;

	int EA_S; //Secuencia de entrada (S)
	int EA_R; //Secuencia de salida (R)
    int numEle;
    
	/* Algoritmo */
	cin >> EA_S;//Comenzar;
	
	//SEGÚN EA
	if (EA_S == MF) {		//EA = MarcaFin :
			//{Tratamiento sec. vacía }
			numEle = 0;
	}
	else {  //EA ≠ MarcaFin :
			//{ Tratamiento 1er elemto. }
			EA_R = EA_S;
			numEle = 1;
		do { 							//ITERAR
			cin >> EA_S; //Avanzar
		if (EA_S == MF){ break;}  		//DETENER EA = MarcaFin;
			//{ Tratamiento de EA }
			EA_R = EA_R + EA_S;
			numEle = numEle + 1;
			cout << EA_R << ' '; //Registrar(R)
			EA_R = EA_S;
		} while(true); 					//FIN_ITERAR;
		//{ Terminación del tratto. }
		cout << MF; //MArcar(R)
	}//FIN_SEGÚN;
	//{ Terminación del tratto. }
	if (numEle <= 1){
		cout << "Error sec. vacía " << endl;
	}
	
}
