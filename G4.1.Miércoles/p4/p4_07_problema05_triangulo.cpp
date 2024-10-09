#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
		float x, y;
};

struct Triangulo {
		Punto p1, p2, p3;
};

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x)
{
	return (x*x);
}

void leerPunto(Punto &p){
    cout << "Introduce el valor de X: ";
	cin >> p.x;
	cout << "Introduce el valor de Y: ";
	cin >> p.y;
}

void leerTriangulo(Triangulo &t){
    leerPunto(t.p1);
    leerPunto(t.p2);
    leerPunto(t.p3);
}

void imprimirPunto(Punto p,int n){
 cout << "P"<<n<<"("<<p.x<<","<<p.y<<")"<<endl;
};

void imprimirTriangulo(Triangulo t){
	 imprimirPunto(t.p1,1);
	 imprimirPunto(t.p2,2);
	 imprimirPunto(t.p3,3);
}

float calculaLongitudSegmento(Punto p1, Punto p2){
	float distancia;
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
    distancia = sqrt ( sqr (p1.x - p2.x) +
	sqr (p1.y - p2.y));

	return distancia;
}

float calculaPerimetroTriangulo(Triangulo t){
	float l1, l2, l3;
	
	l1 = calculaLongitudSegmento(t.p1,t.p2);
	l2 = calculaLongitudSegmento(t.p1,t.p3);
	l3 = calculaLongitudSegmento(t.p3,t.p2);
	
	return (l1+l2+l3);
}

int main() {
	Triangulo miTriangulo;
	float perimetro;

	/* Introducción de datos */

	leerTriangulo(miTriangulo);
	imprimirTriangulo(miTriangulo);	


	/* mostramos el resultado */
	perimetro = calculaPerimetroTriangulo(miTriangulo);
	
	cout << "El perímetro del triángulo es: " 
	     << perimetro << endl;
	return 0;
}
