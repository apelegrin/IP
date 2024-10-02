#include <iostream>
using namespace std;

void BinDec (int b4, int b3, int b2, int b1, int &dec)
{
	dec = b1*1 + b2*2 + b3*4 + b4*8;
}

void Intercambio (char &a, char &b)
{
	char aux;
	aux = a;
	a = b;
	b = aux;
}

int main() {
	int b1, b2, decimal1, decimal2;
	char x, y, z;

	b1 = 0;
	b2 = 1;
	x = 'O';
	y = 'P';
	z = 'Q';
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "Valor de las variables x, y antes   es: " << x << y << endl;
	Intercambio (x, y);
	cout << "Valor de las variables x, y después es: " << x << y << endl;
	cout << "Valor de las variables y, z antes   es: " << y << z << endl;
	Intercambio (y, z);
	cout << "Valor de las variables y, z después es: " << y << z << endl;
	cout << "Binario 1 : " << b1<<b2<<b1<<b2<<endl;
	BinDec (b1, b2, b1, b2, decimal1);
	cout << "Binario 1 : " << 0<<1<<b1<<b1<<endl;
	BinDec (0, 1, b1, b1, decimal2);
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;
	return 0;
}
