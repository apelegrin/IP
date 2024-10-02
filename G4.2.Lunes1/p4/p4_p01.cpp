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

	int finalMes;
	
	cout << "Dame una fecha dd mm aa ";
	cin >> fechaEntrada.dia >> fechaEntrada.mes >>  fechaEntrada.ano;
	
	switch (fechaEntrada.mes){
		case 2:
		    if ((fechaEntrada.ano % 4) == 0){
				finalMes = 29;}
			else{
				finalMes = 28;}
			break;
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
	/* Caso normal no es fin de mes */
	if (fechaEntrada.dia < finalMes){
		fechaSalida.dia = fechaEntrada.dia + 1;
		fechaSalida.mes = fechaEntrada.mes;
		fechaSalida.ano = fechaEntrada.ano;
	}
	/* Es fin de mes pero no de año */
	else if (fechaEntrada.mes != 12){
		fechaSalida.dia = 1;
		fechaSalida.mes = fechaEntrada.mes + 1;
		fechaSalida.ano = fechaEntrada.ano;
	}
	/* Es fin de año */
	else {
		fechaSalida.dia = 1;
		fechaSalida.mes = 1;
		fechaSalida.ano = fechaEntrada.ano + 1;
	}
	/* Algoritmo */
	cout << "La fecha siguiente es  ";
	cout << fechaSalida.dia << "-" << fechaSalida.mes << "-" <<  fechaSalida.ano << endl;;
	
	
}
