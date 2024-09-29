#include <iostream>
using namespace std;
int main() {
	/* Léxico */
	int diaEntrada, mesEntrada, anoEntrada;
	int diaSalida,  mesSalida,  anoSalida;
	int finMes;
	/* Algoritmo */
	cout << "Introduce una fecha dd mm aaaa: ";
	cin >> diaEntrada >> mesEntrada >> anoEntrada;
	
	switch (mesEntrada){
		case 2:
			if ((anoEntrada % 4) == 0){
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
	if (mesEntrada == 12) {
		diaSalida = 1;
		mesSalida = 1;
		anoSalida = anoEntrada + 1; }
	else if (diaEntrada == finMes) {
		diaSalida = 1;
		mesSalida = mesEntrada + 1;
		anoSalida = anoEntrada; }
	else {
		diaSalida = diaEntrada + 1;
		mesSalida = mesEntrada;
		anoSalida = anoEntrada; }	
	cout << "El dia siguiente es " << diaSalida 
	     << "-" << mesSalida << "-" << anoSalida << endl;
}




