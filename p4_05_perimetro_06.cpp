#include <iostream>
#include <cmath>
 
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Rectangulo {
	Punto v1, v2, v3, v4;
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
};

void leerRectangulo(Rectangulo &r){
	 leerPunto(r.v1);
	 leerPunto(r.v2);
	 leerPunto(r.v3);
	 leerPunto(r.v4); 
};

void imprimirRectangulo(Rectangulo r){
	 imprimirPunto(r.v1);
	 imprimirPunto(r.v2);
	 imprimirPunto(r.v3);
	 imprimirPunto(r.v4);
};

float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));

    return (distancia);
};

float calculaPerimetroRectangulo(Rectangulo r){
      float l1, l2, l3, l4;
      l1 = calculaDistancia(r.v1,r.v2);
      l2 = calculaDistancia(r.v2,r.v3);
      l3 = calculaDistancia(r.v3,r.v4);
      l4 = calculaDistancia(r.v4,r.v1);
      return (l1+l2+l3+l4);
}

int main() {

	Rectangulo miRectangulo;
	float perimetro;
	
	/* Introducción de datos */
	leerRectangulo(miRectangulo);
	imprimirRectangulo(miRectangulo);
	perimetro = calculaPerimetroRectangulo(miRectangulo);

	/* mostramos el resultado */
	cout << "El perímetro del triángulo es: " 
		 << perimetro << endl;
	
	return 0;
}


