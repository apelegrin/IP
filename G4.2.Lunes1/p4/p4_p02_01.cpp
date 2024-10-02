#include <iostream>
using namespace std;
/* 
 * Intercambio procedimiento para el 
 * intercambio de los valores de 2 variables
 * intercambio (dato_resultado a : Carácter,
 * 				dato_resultado b : Carácter)
 * 
 * PRE  { a,b : Carácter }
 * POST { a,b : Carácter han intercambiados sus valores }
 * 
 * 
 * */

void Intercambio (char &a, char &b)
{
	char aux;
	aux = a;
	a = b;
	b = aux;
}

int main() {
	/* Léxico*/
	char c1, c2;
	
	cout << "Dame 2 carácteres ";
	cin >> c1 >> c2;
	cout << "c1 vale " << c1 << endl;
	cout << "c2 vale " << c2 << endl;
	cout << "hago intercambio" << endl;
	Intercambio(c1,c2);
	cout << "Ahora c1 vale " << c1 << endl;
	cout << "Ahora c2 vale " << c2 << endl;
}
