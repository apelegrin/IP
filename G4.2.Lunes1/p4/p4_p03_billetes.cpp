#include <iostream>

using namespace std;
/* 
 * divisionEntera procedimiento para realizar una división enterea
 * 
 * divisionEntera    (dato dividendo : Entero,
 * 		      		  dato divisor   : Entero,
 * 			 dato_resultado cociente : Entero,
 *              dato_resultado resto : Entero)
 * 
 * PRE  { dividendo, divisor : Entero, divisor > 0 }
 * POST { cociente : Entero, cociente de la división 
 *           resto : Entero, resto de la división  }
 *  
 * */
 
void divisionEntera (int dividendo, int divisor, 
					 int &cociente, int &resto){

     cociente = dividendo / divisor;
     //resto    = dividendo - (cociente * divisor);
     resto    = dividendo % divisor;
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
	divisionEntera (cantidad,500,quinientos,resto);
	divisionEntera (resto,100,cien,resto);
	divisionEntera (resto,50,cincuenta,resto);
	divisionEntera (resto,20,veinte,resto);
	divisionEntera (resto,10,diez,resto);
	divisionEntera (resto,5,cinco,resto);
	
	cout << quinientos << " billetes de 500€" << endl;
	cout << cien       << " billetes de 100€" << endl;
	cout << cincuenta  << " billetes de 50€" << endl;
	cout << veinte     << " billetes de 20€" << endl;
	cout << diez       << " billetes de 10€" << endl;
	cout << cinco      << " billetes de 5€" << endl;
	cout << resto      << "€ quedan" << endl;
}


