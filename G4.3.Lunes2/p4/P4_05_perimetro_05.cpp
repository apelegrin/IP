#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Poligono {
	Punto v1, v2, v3, v4;
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


void leerPoligono(Poligono &poli){
	leerPunto(poli.v1);
	leerPunto(poli.v2);
	leerPunto(poli.v3);
	leerPunto(poli.v4);
};


void imprimirPunto(Punto p){
	cout << "("<<p.abscisa<<","<<p.ordenada<<")"<<endl;
};

void imprimirPoligono(Poligono poli){
	cout << "Vértice 1 ";
	imprimirPunto(poli.v1);
	cout << "Vértice 2 ";
	imprimirPunto(poli.v2);
	cout << "Vértice 3 ";
	imprimirPunto(poli.v3);
	cout << "Vértice 4 ";
	imprimirPunto(poli.v4);
};

float calculaDistancia(Punto p1, Punto p2){
	float distancia;
	
	distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) +
			    sqr (p1.ordenada - p2.ordenada));

	return distancia;
}

float calculaPerimetro(Poligono poli){
	float l1,l2,l3,l4;
	l1 = calculaDistancia(poli.v1,poli.v2);
	l2 = calculaDistancia(poli.v1,poli.v3);
	l3 = calculaDistancia(poli.v2,poli.v4);
	l4 = calculaDistancia(poli.v3,poli.v4);
	
	return (l1+l2+l3+l4);
}

int main() {
	Poligono miPoligono;
	
		
	leerPoligono(miPoligono);
	imprimirPoligono(miPoligono);
	
	cout  << "El área del triángulo es : " 
		  << calculaPerimetro(miPoligono) << endl;
	
	
	return 0;
}





