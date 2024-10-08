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
	 imprimirPunto(t.v1);
	 imprimirPunto(t.v2);
	 imprimirPunto(t.v3);
};

float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));

    return (distancia);
};

float calculaPerimetroTriangulo(Triangulo t){
      float l1, l2, l3;
      l1 = calculaDistancia(t.v1,t.v2);
      l2 = calculaDistancia(t.v2,t.v3);
      l3 = calculaDistancia(t.v1,t.v3);
      return (l1+l2+l3);
}

int main() {

	Triangulo miTriangulo;
	float perimetro;
	
	/* Introducción de datos */
	leerTriangulo(miTriangulo);
	imprimirTriangulo(miTriangulo);
	perimetro = calculaPerimetroTriangulo(miTriangulo);

	/* mostramos el resultado */
	cout << "El perímetro del triángulo es: " 
		 << perimetro << endl;
	
	return 0;
}


