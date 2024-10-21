#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	int x,y;
	long long int pot;
	int i;
	
	/* Algoritmo */
	cout << "Dame los valores de [x,y] ";
	cin >> x >> y;
	//Calcular 2^x
	pot = 1;
	for (i=1; i <= x; i++){
		pot = pot * 2;
	}//end_for
	
	cout << pot << endl;

    //Calcular desde 2(x+1) hasta 2(y)
    for (i=x+1; i <= y; i++){
		pot = pot * 2;
		cout << pot << endl;
	}//end_for
}


