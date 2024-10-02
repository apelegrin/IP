#include <iostream>

using namespace std;

int Max2 (int a, int b)
{
	int mayor;
	if (a > b) {
		mayor = a; }
	else {
		mayor = b; }

	return mayor;
}

int Max3 (int a, int b, int c){
	int mayor;
	mayor = Max2(a,b);
	return Max2(mayor,c);
	
	//return Max2(Max2(a,b),c);
}

int main () {
	//Léxico
	int v1, v2, v3;
		
	//Algoritmo
	cout << "Dame 3 números >";
	cin >> v1 >> v2 >> v3;
	cout << "El mayor es " << Max3(v1,v2,v3) << endl;
	
}


