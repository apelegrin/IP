#include <iostream>

using namespace std;
	
int main() {
	/* Léxico*/
    const int MF = -1;
    int EA_S, EA_R;
    int anterior;
    int numElementos;
    
    cin >> EA_S; //Comenzar;
	if (EA_S == MF){
			//{Tratamiento sec. vacía }
			numElementos = 0;
	}else{
			//{ Tratamiento 1er elemto. }
			anterior = EA_S;
			numElementos = 1;
			do { 					  //ITERAR
				cin >> EA_S; 		     //Avanzar
			if (EA_S == MF) {break;} //DETENER EA = MarcaFin;
									    //{ Tratamiento de EA }
				EA_R = EA_S + anterior;
				numElementos = numElementos + 1;
				anterior = EA_S;
				cout << EA_R << " ";
			}while(true);             //FIN_ITERAR;
	}//END_IF
	//{ Terminación del tratto. }
	if (numElementos < 2){
				cout << "ERROR Secuencia vacía" << endl;
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
