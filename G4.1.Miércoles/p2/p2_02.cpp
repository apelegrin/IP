#include <iostream>
using namespace std;
int main () {
	//LÉXICO
	int cantidad, resto;
	int quinientos, cien, cincuenta, veinte, diez, cinco;
	
	//Algoritmo
	cout << "Dame la cantidad a repartir > ";
	cin >> cantidad; 
	cout << "La cantidad a repartir son > " << cantidad
	     << "€ " << endl;
    //Calcular los billetes de 500
    quinientos = cantidad / 500;
    resto = cantidad % 500;
    //Calcular los billetes de 100
    cien = resto / 100;
    resto = resto % 100;
    //Calcular los billetes de 50
    cincuenta = resto / 50;
    resto = resto % 50;
    //Calcular los billetes de 20
    veinte = resto / 20;
    resto = resto % 20;
    //Calcular los billetes de 10
    diez = resto / 10;
    resto = resto % 10;
    //Calcular los billetes de 5
    cinco = resto / 5;
    resto = resto % 5;
    cout << endl;
    cout << quinientos << " billetes de 500€" << endl;
    cout << cien 	   << " billetes de 100€" << endl;
    cout << cincuenta  << " billetes de  50€" << endl;
    cout << veinte     << " billetes de  20€" << endl;
    cout << diez       << " billetes de  10€" << endl;
    cout << cinco      << " billetes de   5€" << endl;
    cout << resto      << " en monedas" << endl;
    
}


