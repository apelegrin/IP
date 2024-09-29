/*
 * Calificación con valores en intervalo 
 */
#include <iostream>
using namespace std;
	int main() {
		/* Léxico */
		float capital;
		int meses;
		float interes;
		float mensualidad;
		float total;
		char riesgo;
		
		/* Algoritmo */
		cout << "Introduce la pasta que quieres : ";
		cin >> capital;
		cout << "A cuantos meses : ";
		cin >> meses;
		cout << "Interés : ";
		cin >> interes;
		cout << "Cliente de riesgo (s/n) >"; 
		cin >> riesgo;
		total = capital + (capital * ((interes / 100.0) * meses));
		//vemos si es un cliente de riesgo
		if ((riesgo == 's') || (riesgo == 'S')){
			total = total * 1.01;
		}
		
		cout << "Tienes que devolver "<< total <<"€"<<endl;
		mensualidad = total / meses;
		cout << "Cada mes son : "<< mensualidad <<"€"<<endl;

}
