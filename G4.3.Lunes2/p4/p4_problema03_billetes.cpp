#include <iostream>

using namespace std;

/*
 * divEntera procedimiento para realizar la 
 * división entera
 * 
 * BicDec (dato dividendo: Entero,
 * 		   dato divisor: Entero,
 * 		   dato_resultado cociente: Entero,
 * 		   dato_resultado resto: Entero)
 * 
 * PRE  { dividendo, divisor, cociente, resto : Entero; 
 * 		  dividendo, divisor > 0 }	
 * POST { cociente : Entero; valor cociente div entera
 *        resto : Entero; valor resto div entera     }
 * 
 * 
 * */

void divEntera(int dividendo, int divisor, 
               int &cociente, int &resto){
				   
	cociente = dividendo / divisor;
	resto = dividendo % divisor;
}

int main () {
	//Léxico
	int cantidad;
	int resto;
	int quinientos, cien, cincuenta, veinte, diez, cinco;
	
	//Algoritmo
	cout << "Dame la cantida de € a convertir >";
	cin >> cantidad;
	cout << "El montante de " << cantidad << "€ se reparte" << endl;
	
	divEntera(cantidad,500,quinientos,resto);
	divEntera(resto,100,cien,resto);
	divEntera(resto,50,cincuenta,resto);
	divEntera(resto,20,veinte,resto);
	divEntera(resto,10,diez,resto);
	divEntera(resto,5,cinco,resto);
	
	cout << quinientos << " billetes de 500€" << endl;
	cout << cien       << " billetes de 100€" << endl;
	cout << cincuenta  << " billetes de 50€" << endl;
	cout << veinte     << " billetes de 20€" << endl;
	cout << diez       << " billetes de 10€" << endl;
	cout << cinco      << " billetes de 5€" << endl;
	cout << resto      << "€ quedan" << endl;
}


