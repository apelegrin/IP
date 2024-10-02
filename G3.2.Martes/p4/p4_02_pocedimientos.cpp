#include <iostream>
using namespace std;
	/*
	 * BinDec procedimiento para pasar a binario un 
	 * número de 4 bits b4 b3 b2 b1
	 * PRE { b1,b2,b3,b4 enteros con 0<= b1,b2,b3,b4 <=1 }
	 * POST {dec tiene el valor decimal equivalente al
	 *       número binario definido por b4b3b2b1        }
	 */

	void BinDec (int b4, int b3, int b2, int b1, int &dec)
	{
		dec = b1*1 + b2*2 + b3*4 + b4*8;
	}

	/*
	 * Intercambio procedimiento para intercambiar 
	 * dos valiables de tipo carácter
	 * PRE { a, b sean de tipo carácter }
	 * POST {a y b se han intercambiado su valor }
	 */
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
	cout << "Valor de x, y antes  : " << x << y << endl;
	Intercambio (x, y);
	cout << "Valor de x, y después: " << x << y << endl;
	cout << "Valor de y, z antes: " << y   << z << endl;
	Intercambio (y, z);
	cout << "Valor de y, z después: " << y << z << endl;
	BinDec (b1, b2, b1, b2, decimal1);
	BinDec (0, 1, b1, b1, decimal2);
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "n1 = " << b1 << b2 << b1 << b2 << endl;
	cout << "n2 = " << 0 << 1 << b1 << b1 << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;

	return 0;
}
