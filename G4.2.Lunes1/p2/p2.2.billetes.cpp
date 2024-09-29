#include <iostream>

using namespace std;

int main () {
	//Léxico
	int cantidad;
	int resto;
	int quinientos, cien, cincuenta, veinte, diez, cinco;
	
	//Algoritmo
	cout << "Dame la cantida de € a convertir >";
	cin >> cantidad;
	cout << "El montante de " << cantidad << "€ se reparte" << endl;
	quinientos = cantidad / 500;
	resto      = cantidad % 500;
	cien       = resto / 100;
	resto      = resto % 100;
	cincuenta  = resto / 50;
	resto      = resto % 50;
	veinte     = resto / 20;
	resto      = resto % 20;
	diez       = resto / 10;
	resto      = resto % 10;
	cinco      = resto / 5;
	resto      = resto % 5;
	
	cout << quinientos << " billetes de 500€" << endl;
	cout << cien       << " billetes de 100€" << endl;
	cout << cincuenta  << " billetes de 50€" << endl;
	cout << veinte     << " billetes de 20€" << endl;
	cout << diez       << " billetes de 10€" << endl;
	cout << cinco      << " billetes de 5€" << endl;
	cout << resto      << "€ quedan" << endl;
}


