#include <iostream>
using namespace std;
int main () {
	//Lexico
	int x,y;
	int potencia;
	int i;
	
	cout << "Intervalo [x,y] > ";
	cin >> x >> y;
	
	
	potencia = 1;
	//Calcular desde 2^x hasta 2^y
	for (i = 1; i <= y; i++) {
		potencia = potencia * 2;
		if (i >= x){
			cout << "[" << x << "," << y << "] 2^" << 
				i << "=" << potencia << endl;
		}
	}
}
