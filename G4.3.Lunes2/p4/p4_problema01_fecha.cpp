#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	struct fecha {
		int dia;
		int mes;
		int ano;
	};
		
	fecha fechaEntrada;
	fecha fechaSalida;

	int finMes;
	
	/* Algoritmo */
	cout << "Dame una fecha dd mm aa ";
	cin  >> fechaEntrada.dia >> fechaEntrada.mes >> fechaEntrada.ano;
	cout << "La fecha inicial es : " << fechaEntrada.dia << "-" <<
			fechaEntrada.mes << "-" << fechaEntrada.ano << endl;
	
	//Determinar cuantos días tiene el més de entrada
	switch (fechaEntrada.mes){
		case  2:
			if ((fechaEntrada.ano % 4) == 0){
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
	/* Caso normal no es fin de mes */
	if (fechaEntrada.dia < finMes){
		fechaSalida.dia = fechaEntrada.dia + 1;
		fechaSalida.mes = fechaEntrada.mes;
		fechaSalida.ano = fechaEntrada.ano;
	}
	/* es fin de mes pero no de año */
	else if (fechaEntrada.mes != 12){
		fechaSalida.dia = 1;
		fechaSalida.mes = fechaEntrada.mes + 1 ;
		fechaSalida.ano = fechaEntrada.ano;
	}
	else {
		fechaSalida.dia = 1;
		fechaSalida.mes = 1 ;
		fechaSalida.ano = fechaEntrada.ano + 1;
	}
	cout << "La fecha siguiente es : " << fechaSalida.dia << "-" <<
			fechaSalida.mes << "-" << fechaSalida.ano << endl;
}


















