#include <iostream>
using namespace std;
int main () {
	//LÉXICO
	char a, b, c;
	char aux;
	
	//Algoritmo
	cout << "Dame los valores de a b c > ";
	cin >> a >> b >> c; 
	cout << "La variable a vale > " << a << endl;
	cout << "La variable b vale > " << b << endl;
	cout << "La variable c vale > " << c << endl;
	cout << endl;
	//aux <- c
	aux = c;
	//1a rotación c <- b
	c = b;
	//2a rotación c <- b
	b = a;
	//3a rotación a <- aux
	a = aux;
	cout << "La variable a vale > " << a << endl;
	cout << "La variable b vale > " << b << endl;
	cout << "La variable c vale > " << c << endl;	
}


