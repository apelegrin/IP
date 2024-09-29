#include <iostream>
using namespace std;
int main () {
	float notaTeoria;
	float notaPractica;
	float notaFinal;
	
	cout << "Introduce la nota de teoría y la de prácticas: ";
	cin >> notaTeoria >> notaPractica;
	notaFinal = notaTeoria * 0.7 + notaPractica * 0.3;
	cout << notaFinal << endl;
}
