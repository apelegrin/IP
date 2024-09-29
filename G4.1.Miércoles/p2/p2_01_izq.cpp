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
	//aux <- a
	aux = a;
	//1a rotación a <- b
	a = b;
	//2a rotación b <- c
	b = c;
	//3a rotación c <- aux
	c = aux;
	cout << "La variable a vale > " << a << endl;
	cout << "La variable b vale > " << b << endl;
	cout << "La variable c vale > " << c << endl;	
}


