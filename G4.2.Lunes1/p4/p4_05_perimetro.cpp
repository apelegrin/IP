#include <iostream>
#include <cmath>
/* El nombre del tipo, 		-> Punto
 * el nombre de la función,
 * las variables de ese tipo, 
 * los parámetros reales y formales,
 *  y las llamadas a la función.
 * */
 
using namespace std;

/* Tipo punto que almacena 2 coordenadas */
struct Punto {
		float abscisa, ordenada;
};
	
/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
/* Función para calcular el cuadrado */
float sqr (float x) //Parámetro formal x
{
	return (x*x);
}

/* función que calcula la distancia entre 2 puntos */
float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));
	
	return distancia;
}

int main() {
	
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
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	// Llamada 1 sqr (p1.abscisa - p2.abscisa), p. actuales (p1.abscisa - p2.abscisa)
	// Llamada 2 sqr (p1.ordenada - p2ordenada), p. actuales (p1.ordenada - p2ordenada)
	//distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));
	
	distancia = calculaDistancia(p1,p2);
	
	/* mostramos el resultado */
	cout << "La distancia entre los dos puntos es: " << distancia << endl;
	
	return 0;
}


