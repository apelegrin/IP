#include <iostream>
#include <cmath>

using namespace std;

int main () {
	/* Léxico */
	const int MF=-1;
    int EA;
    int cont;
    
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
	cin >> EA; //Comenzar;
	//{Trat. Inicial}
	cont = 0;
	while (EA != MF) {
		//{Trat EA}
		cout << EA << ", ";
		cont = cont + 1;
		
		cin >> EA;//Avanzar
	}
	//{Tratamiento posterior}
	cout << endl << "El número de datos recogidos es: " << cont << endl;
	
	return 0;
}



