#include <iostream>
using namespace std;

void escribirCodifica(char c){
	/* Algoritmo */
	cout << c;
	if ((c >= 'a') && (c <= 'z')) {
		cout << " Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << " Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << " Es un digito" << endl; }
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << " Es un signo de puntuación" << endl; }
	else if (c == ' ') {
		cout << " Es un espacio " << endl; }	
	else {
		cout << " Carácter desconocido" << endl; }
}

int main () {
	char c; // carácter actual

	cin.get(c); 
	while (c != '\n') // fin de línea de la entrada de datos
	{
		escribirCodifica(c);
		cin.get(c);
	};
	
}


