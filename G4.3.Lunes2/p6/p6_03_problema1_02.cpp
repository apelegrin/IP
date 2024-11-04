#include <iostream>
#include <cmath>

using namespace std;

int main () {
	/* Léxico */
	const int MF=-1;
    int EA;
    int cont;
    
    //{Trat. Inicial}
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
	cont = 0;
	while (EA != MF) {
		cin >> EA;//Avanzar
		//{Trat EA}
		cout << EA << ", ";
		cont = cont + 1;
	}
	//{Tratamiento posterior}
	cout << endl << "El número de datos recogidos es: " << cont << endl;
	
	return 0;
}



