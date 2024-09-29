/*
 * Programa para calcular la calificación final
 * 
 * */
#include <iostream>
using namespace std;
int main () {
	//Léxico
	int d3,d2,d1,d0;
	int decimal;
		
	//Algoritmo
	cout << "Dame una número octal de 4 dígitos >";
	cin >> d3 >> d2 >> d1 >> d0;
	cout << "Número a convertir " 
		 << d3 << d2 << d1 << d0 << endl;
	
    decimal = d3*512 + d2*64 + d1*8 + d0;
    cout << d3 << d2 << d1 << d0 << " en octal es " 
		 << decimal << " en decimal" << endl;
	
	return 0;

}








