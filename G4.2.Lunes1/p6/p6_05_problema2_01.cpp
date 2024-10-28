#include <iostream>

using namespace std;
	
int main() {
	const int MF=-1;
	int EA_S;
    int EA_R;
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
	cin >> EA_S; //Comenzar
	//Inicialización del tratamiento
	EA_R = 0;
	while (EA_S != MF) {
	    //{tratamiento EA}
	    EA_R = EA_R + EA_S;
	    cout << EA_R << " "; //Registrar
		cin >> EA_S; //Avanzar
	}
	// {trat posterior}
	return 0;
}
	
	
	
	
	
	
	
	
	
