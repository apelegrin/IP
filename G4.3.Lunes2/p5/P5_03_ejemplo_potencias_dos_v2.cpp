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
	
	//Recorremos de 1 a y
	for (i=1; i <= y; i++){
		potencia = potencia * 2;
		//Solo se imprime lo requerido
		if (i >= x){
			cout << "2^" << i << " = " << potencia << endl;}
	} 
	return 0;
}
