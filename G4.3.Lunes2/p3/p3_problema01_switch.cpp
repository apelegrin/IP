#include <iostream>
using namespace std;
int main() {
	//Léxico
	int nota;
	
	//Algoritmo
	cout << "Dame una nota ";
	cin >> nota;
	
	switch (nota){
		case 14:
		case 15:
			cout << "Aprobado" << endl;
			break;
		case 16:
		case 17:
			cout << "Notable" << endl;
			break;
		case 18:
		case 19:
			cout << "Sobresaliente" << endl;
			break;
		case 20:
			cout << "M. De Honor" << endl;
			break;
		default:
			cout << "Suspenso" << endl;
	}
}
