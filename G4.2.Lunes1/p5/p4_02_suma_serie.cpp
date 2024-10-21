#include <iostream>
using namespace std;
int main () {
	//Lexico
	int cuenta;
	float suma ;
	float limite;
	suma = 0;
	cuenta = 0;
	
	cout << "Valor del límite ";
	cin >> limite;
	
	do { 						//REPETIR
		cuenta = cuenta + 1;
		suma = suma + (1.0/cuenta);
	} while (!(suma > limite));	//HASTA_QUE suma > limite
	cout << "Con " << cuenta << " términos, la suma es " << suma << endl;
}
