#include <iostream>
using namespace std;
int main() {
	/* Léxico */
	struct Fecha { int d; int m; int a; };
	Fecha fechaEntrada;
	Fecha fechaSalida;
	
	int finMes;
	/* Algoritmo */
	cout << "Introduce una fecha dd mm aaaa: ";
	cin >> fechaEntrada.d >> fechaEntrada.m >> fechaEntrada.a;
	
	switch (fechaEntrada.m){
		case 2:
			if ((fechaEntrada.a % 4) == 0){
				finMes = 29; }
			else {
				finMes = 28; }
			break;
		case  4:
		case  6:
		case  9:
		case 11:
			finMes = 30;
			break;
		default:
			finMes = 31;
			break;
	}
	if (fechaEntrada.m == 12) {
		fechaSalida.d = 1;
		fechaSalida.m = 1;
		fechaSalida.a = fechaEntrada.a + 1; }
	else if (fechaEntrada.d == finMes) {
		fechaSalida.d = 1;
		fechaSalida.m = fechaEntrada.m + 1;
		fechaSalida.a = fechaEntrada.a; }
	else {
		fechaSalida.d = fechaEntrada.d + 1;
		fechaSalida.m = fechaEntrada.m;
		fechaSalida.a = fechaEntrada.a; }	
	cout << "El dia siguiente es " << fechaSalida.d 
	     << "-" << fechaSalida.m << "-" << fechaSalida.a << endl;
}




