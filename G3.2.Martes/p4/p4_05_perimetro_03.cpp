#include <iostream>
#include <cmath>
 
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Triangulo{
	Punto v1, v2, v3;
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

void imprimirPunto(Punto p){
    cout << "Punto ("<<p.abscisa<<","<<p.ordenada<<")"
         << endl;
}

void leerTriangulo(Triangulo &t){
	 leerPunto(t.v1);
	 leerPunto(t.v2);
	 leerPunto(t.v3);
};

void imprimirTriangulo(Triangulo t){

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
	imprimirPunto(p1);
	imprimirPunto(p2);
	
	
	distancia = calculaDistancia(p1,p2);
	/* mostramos el resultado */
	cout << "La distancia entre los dos puntos es: " << distancia << endl;
	
	return 0;
}


