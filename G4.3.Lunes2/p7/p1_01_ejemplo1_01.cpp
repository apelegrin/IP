#include <iostream>

using namespace std;
bool esPar(int dato){
	bool par;
	if ((dato % 2) == 0){
		par = true;
	}else{
		par = false;
	}
	return par;
}

int main () {
	const int MF = -1;
	/* Léxico */
	int EA_S; //Secuencia de entrada

	cin >> EA_S; // Comenzar; 
	//MIENTRAS NO FDS YDESPUÉS NO Pro (EA) HACER
	while ( (EA_S != MF) && (!esPar(EA_S)) ){
		// TTos. para mantener el invariante*
		cin >> EA_S; //Avanzar
	}// FIN_MIENTRAS;
	if (EA_S == MF){
	    //{ Tratto. elemento no encontrado }
	    cout << "No se ha encontrado un número par" << endl;
    }else {
		//{ Tratamiento EA encontrado }
		cout << "Encontrado " << EA_S << endl;
	}
}



