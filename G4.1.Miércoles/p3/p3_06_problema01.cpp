/*
 * Calificación con valores en intervalo 
 */
#include <iostream>
using namespace std;
	int main() {
		/* Léxico */
		int n1,n2;
		
		/* Algoritmo */
		cout << "Introduce dos números (n1) (n2) : ";
		cin >> n1 >> n2;
		if (n1 > n2) {
			cout << "El mayor es n1("<<n1<<")"<<endl; }
		else if (n1 < n2){
			cout << "El mayor es n2("<<n2<<")"<<endl; }
		else {
			cout << "n1("<<n1<<") igual a n2("<<n2<<")"<<endl; }
}
