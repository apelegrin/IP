#include <iostream>
using namespace std;
int main() {
	/* Léxico */
	char PermisoConducir;
	/* Algoritmo */
	cout << "Introduzca el tipo de licencia: ";
	cin >> PermisoConducir;

	switch (PermisoConducir) {
		case 'a':
		case 'A':
			cout << "Motocicletas y triciclos de motor";
			break;
		case 'b':	
		case 'B' :
			cout << "Automóviles masa máxima autorizada <= 3500 kg";
			break;
		case 'c':	
		case 'C' :
			cout << " Automóviles masa máxima autorizada > 3500 kg ";
			break;
		default :
			cout << "No contemplado";
			break;
	}
}
