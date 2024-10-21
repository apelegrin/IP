#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const float LIMITE = 5.0;
	float suma;
	int n;

	n = 1;
	suma = 0;
	do {	      // REPETIR
		suma = suma + (1.0/n);
		n = n + 1;
	}while (!(suma > LIMITE)); //HASTA_QUE
	cout << "La suma es " << suma << endl;
	cout << "El nº de términos " << n << endl;
}


