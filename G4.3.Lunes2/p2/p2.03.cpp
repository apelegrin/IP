/*
 * Programa para calcular la calificación final
 * 
 * */
#include <iostream>
using namespace std;
int main () {
	//Léxico
	int b3,b2,b1,b0;
	int decimal;
		
	//Algoritmo
	cout << "Dame una número binario de 4 bits >";
	cin >> b3 >> b2 >> b1 >> b0;
	cout << "Número a convertir " 
		 << b3 << b2 << b1 << b0 << endl;
	
    decimal = b3*8 + b2*4 + b1*2 + b0;
    cout << b3 << b2 << b1 << b0 << " en binario es " 
		 << decimal << " en decimal" << endl;
	
	return 0;

}








