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
 
int Max2 (int a, int b) {
  int mayor;
	if (a > b) {
		mayor = a; }
	else {
		mayor = b; }
	return mayor;
}


int Max3 (int a, int b, int c) {
   int mayor;
   
   mayor = Max2(a,b);
   mayor = Max2(mayor,c);
       	
   return mayor;
}
int main () {
	//Léxico
	int v1, v2, v3;
	int resultado;
	
	//Algoritmo
	cout << "Dame 3 valores >";
	cin >> v1 >> v2 >> v3;
	resultado = Max3(v1,v2,v3);
	
	cout << "El mayor es  " << resultado << endl;

}


