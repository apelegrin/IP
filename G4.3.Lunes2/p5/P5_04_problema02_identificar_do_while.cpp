#include <iostream>
using namespace std;

void identificar(char c){
	cout << c;
	if ((c >= 'a') && (c <= 'z')) {
		cout << " Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << " Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << " Es un digito" << endl; }
	else if ((c == ',') || (c == '.') || (c == ':') || (c == ';')) {
		cout << " Es un signo de puntuación" << endl; }
	else if ((c == '@') || (c == '#') || (c == '$') || (c == '%')) {
		cout << " Es un símbolo" << endl; }	
	else if (c == ' ') {
		cout << " Es un espacio en blanco" << endl; }	
	else {
		cout << " Carácter desconocido" << endl; }
}

int main(){
	//Léxico
	char car;
	
	cout << "Frase > ";
	cin.get(car); //Leer(car);
	do { 					//REPETIR
		identificar(car);
		cin.get(car);
	}while (!(car == '\n'));	//HASTA_QUE
	
	return 0;
}
