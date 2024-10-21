#include <iostream>
using namespace std;
int main(){
	//Léxico
	int contador;
	char car;
	contador = 0;
	
	cout << "Frase > ";
	cin.get(car); //Leer(car);
	do{ 					//REPETIR
		if (car == ' '){
			contador = contador + 1;
		} //end_if
		cin.get(car);
	}while (!(car=='\n'));	//HASTA_QUE
	cout << "El número de blancos es: " << contador << endl;
	return 0;
}
