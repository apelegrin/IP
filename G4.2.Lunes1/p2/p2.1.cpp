#include <iostream>

using namespace std;

int main () {
	//Léxico
	char a, b, c;
	char aux;
	
	//Algoritmo
	aux = '#';
	cout << "Dame el valor de a >";
	cin >> a;
	cout << "Dame el valor de b >";
	cin >> b;
	cout << "Dame el valor de c >";
	cin >> c;
	cout << "P0 a=>" << a << " b=>" << b << " c=>" << c << " aux=>" << aux <<endl;
	aux = b;
	cout << "P1 a=>" << a << " b=>" << b << " c=>" << c << " aux=>" << aux <<endl;
	b = a;
	cout << "P2 a=>" << a << " b=>" << b << " c=>" << c << " aux=>" << aux <<endl;
	a = c;
	cout << "P3 a=>" << a << " b=>" << b << " c=>" << c << " aux=>" << aux <<endl;
	c = aux;
	cout << "P4 a=>" << a << " b=>" << b << " c=>" << c << " aux=>" << aux <<endl;
}


