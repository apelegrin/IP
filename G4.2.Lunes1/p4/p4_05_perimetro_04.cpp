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

/* Tipo triángulo conformado por 3 puntos que son los vértices */	
struct Triangulo{
	Punto p1, p2, p3;
};

struct Rectangulo{
	Punto p1, p2, p3, p4;
};
// miPunto = leerPunto()
// LeerPunto(miPunto)

void leerPunto(Punto &p){
	cout << "Introduce el valor de abscisa: ";
	cin >> p.abscisa;
	cout << "Introduce el valor de la ordenada: ";
	cin >> p.ordenada;
};

void leerTriangulo(Triangulo &t){
   leerPunto(t.p1);
   leerPunto(t.p2);
   leerPunto(t.p3);
};

void leerRectangulo(Rectangulo &r){
   leerPunto(r.p1);
   leerPunto(r.p2);
   leerPunto(r.p3);
   leerPunto(r.p4);
};

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
/* Función para calcular el cuadrado */
float sqr (float x) //Parámetro formal x
{
	return (x*x);
};

/* función que calcula la distancia entre 2 puntos */
float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) + sqr (p1.ordenada - p2.ordenada));
	
	return distancia;
};

float calculaPerimetroTriangulo(Triangulo t){
	float l1, l2, l3;
	l1 = calculaDistancia(t.p1,t.p2);
	l2 = calculaDistancia(t.p1,t.p3);
	l3 = calculaDistancia(t.p2,t.p3);
	
	return (l1+l2+l3);
};

float calculaPerimetroRectangulo(Rectangulo r){
	float l1, l2, l3, l4;
	l1 = calculaDistancia(r.p1,r.p2);
	l2 = calculaDistancia(r.p1,r.p3);
	l3 = calculaDistancia(r.p2,r.p4);
	l4 = calculaDistancia(r.p3,r.p4);
	return (l1+l2+l3+l4);
};

int main() {
	
	Triangulo miTriangulo;
	Rectangulo miRectangulo;
	float perimetro;
	
	/* Introducción de datos */
	//leerTriangulo(miTriangulo);
	leerRectangulo(miRectangulo);
	
	//perimetro = calculaPerimetroTriangulo(miTriangulo);
	perimetro = calculaPerimetroRectangulo(miRectangulo);
	
	/* mostramos el resultado */
	cout << "El perímetro del triángulo es: " << perimetro << endl;
	
	return 0;
}


