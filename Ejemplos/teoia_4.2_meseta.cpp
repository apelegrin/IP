#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const int MARCA_FIN = -1;
	int p, m, u, EA;
	/* Algoritmo */
    cin >> EA; //Comenzar
    p = 0; m = 0; u = 0;
    while (EA != MARCA_FIN){
	    if (EA == u) {
			m = m + 1; }
		else{
			m = 1; }
		if (m > p) {
			p = m; }
		u = EA;
		cin >> EA;	
	}
	cout << "Meseta máxima " << p << endl;
    
}


