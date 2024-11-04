#include <iostream>

using namespace std;

int main () {
	const int MF = -1;
	/* Léxico */
	int EA_S; //Secuencia de entrada
	int EA_R; //Secuencia de salida
	int numEle, anterior;
	
	cin >> EA_S; //Comenzar;
	
	if (EA_S == MF){
		//{Tratamiento sec. vacía }
		numEle = 0;
	} else if (EA_S != MF){
		//{ Tratamiento 1er elemto. }
		numEle = 1;
		do { 
			anterior = EA_S;						//ITERAR
			cin >> EA_S; //Avanzar
			if (EA_S == MF) { break; }
			//{ Tratamiento de EA }
			EA_R = EA_S + anterior;
			cout << EA_R << " ";
			numEle = numEle + 1;
		}while (true);  				//FIN_ITERAR;
	}//end-if
	//{ Terminación del tratto. }
	if (numEle < 2){
		cout << "Error secuencia vacía " << endl;
	}
}



