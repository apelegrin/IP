#include <iostream>
#include <cmath>
using namespace std;
int main () {
	//LÉXICO
	int d4, d3, d2, d1, d0;
	int decimal;
	
	//Algoritmo
	cout << "Dame un número octal de 5 dígitos > ";
	cin >> d4 >> d3 >> d2 >> d1 >> d0; 
	cout << "d4 > " << d4 << endl;
	cout << "d3 > " << d3 << endl;
	cout << "d2 > " << d2 << endl;
	cout << "d1 > " << d1 << endl;
	cout << "d0 > " << d0 << endl;
	cout << endl;
	//decimal = d3*8 + b2*4 + b1*2 + b0;
	decimal = d4*pow(8,4) + d3*pow(8,3) + d2*pow(8,2) + d1*pow(8,1) + d0;
	cout << "El número octal " <<d4<<d3<<d2<<d1<<d0 
	     << " es " << decimal << " en base 10";
    
}


