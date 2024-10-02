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

Punto leerPunto(){
    Punto p;
    
    cout << "Introduce el valor de X: ";
	cin >> p.x;
	cout << "Introduce el valor de Y: ";
	cin >> p.y;
	
	return p;
}
//void leerTriangulo(Triangulo &t)

Triangulo leerTriangulo(){
    Triangulo t;
    
    t.p1 = leerPunto();
    t.p2 = leerPunto();
    t.p3 = leerPunto();
    
    return t;
}

void imprimirTriangulo(Triangulo t){
    cout << "P1 ("<<t.p1.x<<","<<t.p1.y<<")"<<endl;
    cout << "P2 ("<<t.p2.x<<","<<t.p2.y<<")"<<endl;
    cout << "P3 ("<<t.p3.x<<","<<t.p3.y<<")"<<endl;
}

int main() {
	Triangulo miTriangulo;
	float distancia;

	/* Introducción de datos */

	miTriangulo = leerTriangulo();
	
	/* cálculo de la longitud del segmento definido por los dos puntos */
	//distancia = sqrt ( sqr (p1.abscisa - p2.abscisa) +
	//sqr (p1.ordenada - p2.ordenada));

	/* mostramos el resultado */
	imprimirTriangulo(miTriangulo);
	
	//cout << "La distancia entre los dos puntos es: " << distancia << endl;
	return 0;
}
