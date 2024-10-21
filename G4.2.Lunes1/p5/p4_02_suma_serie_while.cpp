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
	
	while (suma <= limite) { //MIENTRAS suma <= limite
		cuenta = cuenta + 1;
		suma = suma + (1.0/cuenta);
	};						//FIN_MIENTRAS
	cout << "Con " << cuenta << " términos, la suma es " << suma << endl;
}
