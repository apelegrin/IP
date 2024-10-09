#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
		float x, y;
};

struct Rectangulo {
		Punto p1, p2, p3, p4;
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

void leerRectangulo(Rectangulo &r){
     leerPunto(r.p1);
     leerPunto(r.p2);
     leerPunto(r.p3);
     leerPunto(r.p4);
}

void imprimirPunto(Punto p,int n){
 cout << "P"<<n<<"("<<p.x<<","<<p.y<<")"<<endl;
};

void imprimirRectangulo(Rectangulo r){
	 imprimirPunto(r.p1,1);
	 imprimirPunto(r.p2,2);
	 imprimirPunto(r.p3,3);
	 imprimirPunto(r.p4,4);
}

float calculaLongitudSegmento(Punto p1, Punto p2){
	float distancia;
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
    distancia = sqrt ( sqr (p1.x - p2.x) +
	sqr (p1.y - p2.y));

	return distancia;
}

float calculaPerimetroRectangulo(Rectangulo r){
	float l1, l2, l3, l4;
	
	l1 = calculaLongitudSegmento(r.p1,r.p2);
	l2 = calculaLongitudSegmento(r.p2,r.p3);
	l3 = calculaLongitudSegmento(r.p3,r.p4);
	l4 = calculaLongitudSegmento(r.p4,r.p1);
	
	return (l1+l2+l3+l4);
}

bool esCuadrado(Rectangulo r){
    float l1, l2, l3, l4;
    bool cuadrado;
    
    cuadrado = false;
    l1 = calculaLongitudSegmento(r.p1,r.p2);
	l2 = calculaLongitudSegmento(r.p2,r.p3);
	l3 = calculaLongitudSegmento(r.p3,r.p4);
	l4 = calculaLongitudSegmento(r.p4,r.p1);
	if ((l1==l2) && (l2==l3) && (l3==l4)){
		cuadrado = true;}
	//return (((l1==l2) && (l2==l3) && (l3==l4))?true:false);
	return cuadrado;
}

int main() {
	Rectangulo miRectangulo;
	float perimetro;

	/* Introducción de datos */

	leerRectangulo(miRectangulo);
	imprimirRectangulo(miRectangulo);	


	/* mostramos el resultado */
	perimetro = calculaPerimetroRectangulo(miRectangulo);
	
	cout << "El perímetro del triángulo es: " 
	     << perimetro << endl;
	cout << "Es cuadrado el rectángulo? "
	     << (esCuadrado(miRectangulo)? "Sí":"No") << endl;
	return 0;
}
