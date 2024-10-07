#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Triangulo {
	Punto v1, v2, v3;
}

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x) //parámetro formal float x
{
	return (x*x);
}

void leerPunto(Punto &p){
	cout << "Introduce el valor de abscisa: ";
	cin >> p.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p.ordenada;
}

void leerTriangulo(Triangulo &t){
	leerPunto(t.v1);
	leerPunto(t.v2);
	leerPunto(t.v3);
}

void imprimirPunto(Punto p){
	cout << "("<<p.abscisa<<","<<p.ordenada<<")"<<endl;
}

void imprimirTriangulo(Triangulo t){
	cout "Vértice 1 ":
	imprimirPunto(t.v1);
	cout "Vértice 2 ":
	imprimirPunto(t.v2);
	cout "Vértice 3 ":
	imprimirPunto(t.v3);
}

int main() {
	
	Punto p1, p2;
	float distancia;

	/* Introducción de datos */
	leerPunto(p1);
	leerPunto(p2);
	

	// C1 Parámetros actuales (p1.abscisa - p2.abscisa)
	// C2 Parámetros actuales (p1.ordenada - p2.ordenada)
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) +
	sqr (p1.ordenada - p2.ordenada));

	/* mostramos el resultado */
	cout << "La distancia entre los dos puntos es: " << distancia << endl;
	return 0;
}
