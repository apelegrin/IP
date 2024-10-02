#include <iostream>
using namespace std;
/* 
 * binDec procedimiento para la conversión de un número
 * binario compuesto por 4 bits en su equivalente
 * decimal
 * 
 * binDec    (dato b3 : Entero,
 * 		      dato b2 : Entero,
 * 		      dato b1 : Entero,
 * 		      dato b0 : Entero,
 * dato_resultado dec : Entero)
 * 
 * PRE  { b3,b2,b1,b0 : Entero con valor de 0 o 1 }
 * POST { dec : Entero valor decimal equivalente al 
 *        número binario definido por b3b2b1b0    }
 *  
 * */

void binDec (int b4, int b3, int b2, int b1, int &dec)
{
	dec = b1*1 + b2*2 + b3*4 + b4*8;
}

void binHEX (int b4, int b3, int b2, int b1, char &res)
{
	int dec;
	dec = b1*1 + b2*2 + b3*4 + b4*8;
	switch (dec){
		case 15:
			res = 'F';
			break;
		case 14:
			res = 'E';
			break;
		case 13:
			res = 'D';
			break;
		case 12:
			res = 'C';
			break;
		case 11:
			res = 'B';
			break;
		case 10:
			res = 'A';
			break;
		default :
		    /* el valor ascii de '0' es 48 */
		    res = char(dec + 48);
		    break;
	}//end-switch
}//end-binHEX

int main() {
	/* Léxico*/
	int v3, v2, v1 , v0;
	int  resultado1;
	char resultado2;
	
	cout << "Dame un número binaro de 4 bits > ";
	cin >> v3 >> v2 >> v1 >> v0;
	binDec(v3,v2,v1,v0,resultado1);
	cout << "En número binario " <<v3<<v2<<v1<<v0<<endl;
	cout << "En decimal es " << resultado1 << endl;
	binHEX(v3,v2,v1,v0,resultado2);
	cout << "En Hexadecimal es " << resultado2 << endl;
}
