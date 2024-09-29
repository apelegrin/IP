#include <iostream>
#include <cmath>
using namespace std;
int main () {
	//LÉXICO
	int b3, b2, b1, b0;
	int decimal;
	
	//Algoritmo
	cout << "Dame un número binario de 4 bits > ";
	cin >> b3 >> b2 >> b1 >> b0; 
	cout << "b3 > " << b3 << endl;
	cout << "b2 > " << b2 << endl;
	cout << "b1 > " << b1 << endl;
	cout << "b0 > " << b0 << endl;
	//decimal = b3*8 + b2*4 + b1*2 + b0;
	decimal = b3*pow(2,3) + b2*pow(2,2) + b1*pow(2,1) + b0;
	cout << "El número binario " <<b3<<b2<<b1<<b0 
	     << " es " << decimal << " en base 10";
    
}


