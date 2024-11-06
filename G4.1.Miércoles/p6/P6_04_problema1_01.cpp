
#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;
	int EA;
	int cont;
	
	cout<<"Introduce una serie enteros positivos, para terminar -1"<< endl;
	cont = 0;
	while (EA != MF) {
		cin >> EA;
		cout << EA<< ", ";
		cont = cont + 1;
	}
	cout << endl << "El número de datos recogidos es: " << cont << endl;
	return 0;
}
