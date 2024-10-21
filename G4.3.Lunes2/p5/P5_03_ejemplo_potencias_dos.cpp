#include <iostream>
using namespace std;
int main(){
	//Léxico
	int x, y;
	float potencia;
	int i;
	
	cout << "Intervalo [x,y]> ";
	cin >> x >> y;
	potencia = 1;
	//calculamos 2^x
	for (i=1; i <=x; i++){
		potencia = potencia * 2;
	}
	cout << "2^" << x << " = " << potencia << endl;
	//Recorremos de x a y
	for (i=x+1; i <= y; i++){
		potencia = potencia * 2;
		cout << "2^" << i << " = " << potencia << endl;
	} 
	return 0;
}
