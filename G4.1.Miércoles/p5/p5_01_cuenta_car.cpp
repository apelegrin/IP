#include <iostream>
using namespace std;

void indentificaCar(char c){
	cout << "{" << c << "} ";
	if ((c >= 'a') && (c <= 'z')) {
		cout << " Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << " Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << " Es un digito" << endl; }
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << " Es un signo de puntuación" << endl; }
	else if ((c == '$') || (c == '%') || (c == '&')) {	
		cout << " Es un símbolo ($,%,&)" << endl; }
	else if (c == ' ') {	
		cout << " Es un espacio" << endl; }
	else {
		cout << " Carácter desconocido" << endl; }
}

int main () {
	/* Léxico */
	char car;

	cout << "Dame una frase ";
	cin.get(car); //Lee un char de la consola
	while (car != '\n') { //mientras no EOL
		//Procesar
	    indentificaCar(car);	
		//Avanzar
		cin.get(car); 
	}//end_while 
	
}


