#include <iostream>
using namespace std;

/*
 * BinDec procedimiento para obtener el equivalente
 * decimal de un número binario
 * 
 * BicDec (dato b4: Entero,
 * 		   dato b3: Entero,
 * 		   dato b2: Entero,
 * 		   dato b1: Entero,
 * 		   dato_resultado decimal: Entero)
 * 
 * PRE  { b4, b3, b2, b1 : Entero; 0<= b1,b2,b3,b4 <=1}	
 * POST { decimal : Entero; valor equivalente en decimal
 *        al número binario definido por b4b3b2b1     }
 * 
 * 
 * */

void BinDec (int b4, int b3, int b2, int b1, int &decimal)
{
	decimal = b1*1 + b2*2 + b3*4 + b4*8;
}

/*
 * Intercambio procedimiento para intercambiar
 * el valor de dos variables de tipo carácter
 * 
 * Intercambio (dato_resultado a: Carácter,
 * 		        dato_resultado b: Carácter)
 * 
 * PRE  { a, b : Carácter }	
 * POST { a tiene el valor original de b,
 *        b tiene el valor original de a}
 * 
 * 
 * */

void Intercambio (char &a, char &b)
{
	char aux;
	
	aux = a;
	a = b;
	b = aux;
}

void BinHex (int b4, int b3, int b2, int b1, char &hex)
{
	int decimal;

	decimal = b1*1 + b2*2 + b3*4 + b4*8;
	switch (decimal){
		case 10:
			hex = 'A';
			break;
		case 11:
			hex = 'B';
			break;
		case 12:
			hex = 'C';
			break;
		case 13:
			hex = 'D';
			break;
		case 14:
			hex = 'E';
			break;
		case 15:
			hex = 'F';
			break;
		default:
			/* sumamos 40 para convertir int en char */
			hex = decimal + 48;
	}
	
}

int main() {
	/* Léxico*/
	int b1, b2, decimal1, decimal2;
	char x, y, z;
	char op1, op2;
	
	/* Algoritmo */

	b1 = 1;
	b2 = 1;
	x = 'O';
	y = 'P';
	z = 'Q';
	cout << "Valor inicial de las variables x, y, z es: " << x << y << z << endl;
	cout << "Valor de las variables x, y, es: " << x << y << endl;
	Intercambio (x, y);
	cout << "Valor de las variables x, y cambiadas es: " << x << y << endl;
	cout << "Valor de las variables y, z, es: " << y << z << endl;
	Intercambio (y, z);
	cout << "Valor de las variables x, y cambiadas es: " << y << z << endl;
	
	BinDec (b1, b2, b1, b2, decimal1);
	BinDec (1, 0, b1, b1, decimal2);
	BinHex (b1, b2, b1, b2, op1);
	BinHex (1, 0, b1, b1, op2);
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;
	cout << "El valor del numero 1 en hex es : " << op1 << endl;
	cout << "El valor del numero 2 en hex : " << op2 << endl;
}


















