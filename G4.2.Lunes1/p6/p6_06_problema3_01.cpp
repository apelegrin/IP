#include <iostream>

using namespace std;
	
int main() {
	/* Léxico*/
	const int MF = -1 ;
	int EA_S, EA_R;
	int nElementos, anterior;
	//Comenzar;
	cin >> EA_S;
	nElementos = 0;
	if (EA_S == MF){
		//{Tratamiento sec. vacía }
	} else if (EA_S != MF){
		//{ Tratamiento 1er elemto. }
		nElementos = nElementos + 1;
		anterior = EA_S;
		do { //ITERAR
			//Avanzar
			cin >> EA_S;
			if (EA_R == MF) {break;}
			  //{ Tratamiento de EA }
			  nElementos = nElementos + 1;
			  EA_R = EA_S + anterior;
			  cout << EA_R << " "; //Registrar
			  anterior = EA_S;
		}while (true); //FIN_ITERAR;		
		//{ Terminación del tratto. }
		if (nElementos < 2){
			cout << "Error secuencia vacía " << endl;
		}
	} //end_if
	return 0;
}
	
	
	
	
	
	
	
	
	
