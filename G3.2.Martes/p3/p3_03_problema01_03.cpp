#include <iostream>
using namespace std;
int main() {
	/* Léxico */
	float nota;
	/* Algoritmo */
	cout << "Introduce una nota: ";
	cin >> nota;
	if (nota == 20.0) {
		cout << "M. De Honor" << endl; }
	else if ((nota >= 18.0) && (nota <= 19.0)) {
		cout << "Sobresaliente" << endl; }
	else if	((nota >= 16.0) && (nota <= 17.0)) {
		cout << "Notable" << endl; }
	else if ((nota >= 14.0) && (nota == 15.0)) {
		cout << "Aprobado" << endl; }	
	else {
		cout << "Suspenso" << endl; }	
}
