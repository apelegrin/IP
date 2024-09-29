/*
 * Programa para calcular la calificación final
 * 
 * */
#include <iostream>
using namespace std;
int main () {
	//Léxico
	int cantidad;
	int quinientos,cien,cincuenta,veinte,diez,cinco;
	int resto;
	
	//Algoritmo
	cout << "Dame una cantidad >";
	cin >> cantidad;
	cout << "Vamos a repartir " << cantidad << "€ en billetes" << endl;
	
	//cálculo billetes 500€
	quinientos = cantidad / 500;
	cout << quinientos << " billetes de 500€" << endl;
	resto = cantidad % 500;
	cout << resto << "€ para repartir" << endl;
	
	//cálculo billetes 100€
	cien = resto / 100;
	cout << cien << " billetes de 100€" << endl;
	resto = resto % 100;
	cout << resto << "€ para repartir" << endl;
	
	//cálculo billetes 50€
	cincuenta = resto / 50;
	cout << cincuenta << " billetes de 50€" << endl;
	resto = resto % 50;
	cout << resto << "€ para repartir" << endl;
	
	//cálculo billetes 20€
	veinte = resto / 20;
	cout << veinte << " billetes de 20€" << endl;
	resto = resto % 20;
	cout << resto << "€ para repartir" << endl;
	
	//cálculo billetes 10€
	diez = resto / 10;
	cout << diez << " billetes de 10€" << endl;
	resto = resto % 10;
	cout << resto << "€ para repartir" << endl;
	
	//cálculo billetes 5€
	cinco = resto / 5;
	cout << cinco << " billetes de 5€" << endl;
	resto = resto % 5;
	cout << resto << "€ en monedas" << endl;
	
	return 0;

}








