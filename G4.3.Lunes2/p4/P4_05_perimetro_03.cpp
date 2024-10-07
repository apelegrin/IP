#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Triangulo {
	Punto v1, v2, v3;
};

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x) //parámetro formal float x
{
	return (x*x);
};

void leerPunto(Punto &p){
	cout << "Introduce el valor de abscisa: ";
	cin >> p.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p.ordenada;
};

Punto leerPuntoF(){
	Punto p;
	cout << "Introduce el valor de abscisa: ";
	cin >> p.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p.ordenada;
	
	return p;
};
//miPunto = leerPunto();

void leerTriangulo(Triangulo &t){
	leerPunto(t.v1);
	leerPunto(t.v2);
	leerPunto(t.v3);
};

Triangulo leerTrianguloF(){
	Triangulo t;
	t.v1 = leerPuntoF();
	t.v2 = leerPuntoF();
	t.v3 = leerPuntoF();
	
	return t;
};

void imprimirPunto(Punto p){
	cout << "("<<p.abscisa<<","<<p.ordenada<<")"<<endl;
};

void imprimirTriangulo(Triangulo t){
	cout << "Vértice 1 ";
	imprimirPunto(t.v1);
	cout << "Vértice 2 ";
	imprimirPunto(t.v2);
	cout << "Vértice 3 ";
	imprimirPunto(t.v3);
};

float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) +
			    sqr (p1.ordenada - p2.ordenada));

	return distancia;
}

int main() {
	Triangulo miTriangulo;
	
	// miTriangulo = leerTrianguloF();
	
	leerTriangulo(miTriangulo);
	imprimirTriangulo(miTriangulo);
	
	
	return 0;
}





