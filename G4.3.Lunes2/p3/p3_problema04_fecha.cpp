#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	int diaEntrada, mesEntrada, anoEntrada;
	int diaSalida,  mesSalida,  anoSalida;
	int finMes;
	
	/* Algoritmo */
	cout << "Dame una fecha dd mm aa ";
	cin  >> diaEntrada >> mesEntrada >> anoEntrada;
	cout << "La fecha inicial es : " << diaEntrada << "-" <<
			mesEntrada << "-" << anoEntrada << endl;
	
	//Determinar cuantos días tiene el més de entrada
	switch (mesEntrada){
		case  2:
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
	if (diaEntrada < finMes){
		diaSalida = diaEntrada + 1;
		mesSalida = mesEntrada;
		anoSalida = anoEntrada;
	}
	/* es fin de mes*/
	else if (mesEntrada != 12){
		diaSalida = 1;
		mesSalida = mesEntrada + 1 ;
		anoSalida = anoEntrada;
	}
	else {
		diaSalida = 1;
		mesSalida = 1 ;
		anoSalida = anoEntrada + 1;
	}
	cout << "La fecha siguiente es : " << diaSalida << "-" <<
			mesSalida << "-" << anoSalida << endl;
}


















