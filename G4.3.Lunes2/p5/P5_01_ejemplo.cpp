#include <iostream>
using namespace std;
int main(){
	//Léxico
	int contador;
	char car;
	contador = 0;
	
	cout << "Frase > ";
	cin.get(car); //Leer(car);
	while (!(car=='\n')){ //MIENTRAS
		if (car == ' '){
			contador = contador + 1;
		} //end_if
		cin.get(car);
	};					//FIN_MIENTRAS
	cout << "El número de blancos es: " << contador << endl;
	return 0;
}
