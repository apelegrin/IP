#include <iostream>
#include <cmath>
using namespace std;
/*
 * el nombre del tipo, -> Punto
 * el nombre de la función, 
 * las variables de ese tipo, 
 * los parámetros reales y formales, 
 * y las llamadas a la función.
*/

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x) //parámetro formal float x
{
	return (x*x);
}



int main() {
	struct Punto {
		float abscisa, ordenada;
	};
	
	Punto p1, p2;
	float distancia;

	/* Introducción de datos */
	cout << "Introduce el valor de abscisa: ";
	cin >> p1.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p1.ordenada;
	cout << "Introduce el valor de abscisa: ";
	cin >> p2.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p2.ordenada;

	// C1 Parámetros actuales (p1.abscisa - p2.abscisa)
	// C2 Parámetros actuales (p1.ordenada - p2.ordenada)
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) +
	sqr (p1.ordenada - p2.ordenada));

	/* mostramos el resultado */
	cout << "La distancia entre los dos puntos es: " << distancia << endl;
	return 0;
}
