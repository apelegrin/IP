#include <iostream>

using namespace std;

int main () {
	//Léxico
	int b3, b2, b1, b0;
	int decimal;
	
	//Algoritmo
	decimal = 0;
	cout << "Dame un nº de 4 bits en binario (p. ej. 1 1 0 0) >";
	cin  >> b3 >> b2 >> b1 >> b0;
	cout << "El nº binario " << b3 << b2 << b1 << b0 << endl;
	decimal = b3 * 8 + b2 * 4 + b1 * 2 + b0;
	cout << "En decimal es " << decimal << endl;
	decimal = 8 / 2 * 4;
	cout << "Test " << decimal << endl;
}


