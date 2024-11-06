#include <iostream>

using namespace std;

bool esPar(int n){
   bool par;
   if ((n % 2) == 0){
	   par = true;}
   else{
	   par = false;}
   return par;
}	

int main() {
	/* Léxico*/
    const int MF = -100;
    int EA_S;
	
	cin >> EA_S; //Comenzar; Inicialización del invariate*
	//MIENTRAS NO FDS Y DESPUÉS NO Pro(EA) HACER
	while ( (EA_S != MF) && (!esPar(EA_S)) ) {
		// TTos. para mantener el invariante*
		cin >> EA_S; //Avanzar
	}
	if (EA_S == MF){
		cout << "Elemento par no encontrado " << endl;
	}else{
	    cout << "Encontrado " << EA_S << endl;
    }
	return 0;
}
	
	
	
	
	
	
	
	
	
