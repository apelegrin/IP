#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	float capital;
	int meses;
	float interesMensual;
	float cuota;
	char riesgo;
	
	/* Algoritmo */
	cout << "Importe del préstamo ";
	cin >> capital;
	cout << "Meses ";
	cin >> meses;
	cout << "Interés Mensual ";
	cin >> interesMensual;
	cout << "¿Cliente de riesgo (s/n) ? ";
	cin >> riesgo;
	cuota = capital * (1 + (meses * interesMensual / 100.0));
	if ((riesgo == 's') || (riesgo == 'S')){
		cuota = cuota * 1.01;
	}
	cuota = cuota / meses;
	cout << "El importe de la cuota es " << cuota << endl;
	
}
