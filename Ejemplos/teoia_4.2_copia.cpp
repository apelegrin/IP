#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const int MF = -1;
	int EA_S;
	int EA_R;
	/* Algoritmo */
    cin >> EA_S; //Comenzar (S);
	while (EA_S != MF){
		EA_R = EA_S;
		cout << EA_R << ' ';
		cin >> EA_S;
	}
	cout << MF;
}


