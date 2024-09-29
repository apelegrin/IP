#include <iostream>
using namespace std;
int main() {
	/* Léxico */
	float capital;
	int meses;
	float interesMensual;
	char riesgo;
	float mensualidad;
	float total;
	/* Algoritmo */
	cout << "Introduce la pasta a pedir: ";
	cin >> capital;
	cout << "Introduce los meses para devolverla: ";
	cin >> meses;
	cout << "Introduce el interés mensual en %: ";
	cin >> interesMensual;
	cout << "¿Es cliente de riesgo (s/n) ?: ";
	cin >> riesgo;
	
	total = capital * (1 + (interesMensual * meses) / 100 );
	if ((riesgo == 's') || (riesgo == 'S')){
		total = total * 1.01; }
	mensualidad = total / meses;
	cout << "Tienes que devolver " << total << endl;
	cout << "En " << meses << " a plazos de " << mensualidad << "€" << endl;
}
