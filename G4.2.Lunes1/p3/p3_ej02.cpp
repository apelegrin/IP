#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	char c;
	/* Algoritmo */
	cout << "Introduce un carácter: " << endl;
	cin >> c;
	if ((c >= 'a') && (c <= 'z')) {
		cout << "Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << "Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << "Es un digito" << endl; }
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << "Es un signo de puntuación" << endl; }
	else {
		cout << "Carácter desconocido" << endl; }
}
