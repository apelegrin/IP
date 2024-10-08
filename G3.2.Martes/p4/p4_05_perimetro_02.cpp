#include <iostream>
#include <cmath>
 
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x)
{
	return (x*x);
};

void leerPunto(Punto &p){
	cout << "Introduce el valor de abscisa: ";
	cin >> p.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p.ordenada;
};

float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));

    return (distancia);
};

int main() {

	Punto p1, p2;
	float distancia;
	
	/* Introducción de datos */
	leerPunto(p1);
	leerPunto(p2);
	
	
	distancia = calculaDistancia(p1,p2);
	/* mostramos el resultado */
	cout << "La distancia entre los dos puntos es: " << distancia << endl;
	
	return 0;
}


