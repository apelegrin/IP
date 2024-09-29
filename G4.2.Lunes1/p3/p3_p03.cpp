#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	int diaEntrada, mesEntrada,  anoEntrada;
	int diaSalida, mesSalida,  anoSalida;
	int finalMes;
	
	cout << "Dame una fecha dd mm aa ";
	cin >> diaEntrada >> mesEntrada >>  anoEntrada;
	switch (mesEntrada){
		case 2:
			finalMes = 28;
		case 4:
		case 6:
		case 9:
		case 11:
			finalMes = 30;
			break;
		default:
			finalMes = 31;
			break;
	}
	if (diaEntrada < finalMes){
		diaSalida = diaEntrada + 1;
		mesSalida = mesEntrada;
		anoSalida = anoEntrada;
	}
	else if (mesEntrada != 12){
		diaSalida = 1;
		mesSalida = mesEntrada + 1;
		anoSalida = anoEntrada;
	}
	else {
		diaSalida = 1;
		mesSalida = 1;
		anoSalida = anoEntrada + 1;
	}
	/* Algoritmo */
	cout << "La fecha siguiente es  ";
	cout << diaSalida << mesSalida <<  anoSalida << endl;;
	
	
}
