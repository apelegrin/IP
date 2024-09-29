#include <iostream>
using namespace std;
int main() {
	/* Léxico*/
	int n1, n2;
	/* Algoritmo */
	cout << "Dame 2 números ";
	cin >> n1 >> n2;
	if (n1 > n2){
		cout << "El máximo es n1 (" << n1 << ")" <<endl;
	}
	else if (n2 > n1) {
		cout << "El máximo es n2 (" << n2 << ")" <<endl;
	}
	else{
		cout << "El n1 (" << n1 << ") es igual a n2 ("
			 << n2 << ")" <<endl;
	}	
}
