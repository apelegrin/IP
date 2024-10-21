#include <iostream>
using namespace std;
int main(){
	//Léxico
	int contador;
	float limite;
	float suma;
	contador = 0;
	suma = 0;
	
	cout << "Límite> ";
	cin >> limite;
	do{ 					    //REPETIR
		contador = contador + 1;
		suma = suma + (1.0/contador);
	}while (!(suma > limite));	//HASTA_QUE
	cout << "El número de términos es: " << contador << endl;
	cout << "La suma es : " << suma << endl;
	return 0;
}
