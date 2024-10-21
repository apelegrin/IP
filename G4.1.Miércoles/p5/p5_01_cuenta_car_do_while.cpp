#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	char car;
	int  contador;
	/* PRE char conjunto de caracteres != EOL  */
	/* POST contador contiene el nº de blancos */
	contador = 0;
	cout << "Dame una frase ";
	do { //Repetir
		cin.get(car); //Lee un char de la consola
		if (car == ' '){
		   contador = contador + 1;
		}
	}while (!(car == '\n')); //Hasta_que
	cout << "En nº de espacios es " 
	     << contador << endl;
}


