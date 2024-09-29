#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	int meses;
	float capital;
	float interesMensual;
	float cuota;
	float total;
	char riesgo;
	
	/* Algoritmo */
	cout << "Dime el capital a pedir al banco ";
	cin  >> capital;
	cout << "a cuantos meses ";
	cin  >> meses;
	cout << "Interés mensual ? ";
	cin  >> interesMensual;
	cout << "¿Cliente de riesgo (s/n) ? ";
	cin  >> riesgo;
	cout << endl;
	total = capital * (1 + meses * (interesMensual / 100.0));
	if ((riesgo == 's') || (riesgo == 'S')){
		//recargo del 1% por riesgo
		total = total * 1.01;
	}
	cout << "Total a devolver " << total << endl;
	cuota = total / meses;
	cout << "Cuota mensual " << cuota << endl;
}









