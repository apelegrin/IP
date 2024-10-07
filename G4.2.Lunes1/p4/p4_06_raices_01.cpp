#include <iostream>
#include <cmath>

using namespace std;

struct Polinomio {
	float a, b, c;
};

float sqr (float x)
{
	return (x*x);
}

void leerPolinomio(Polinomio &p){
	cout << "Término de x² ";
	cin >> p.a;
	cout << "Término de x  ";
	cin >> p.b;
	cout << "Término independiente ";
	cin >> p.c;
}

void escribirPolinomio(Polinomio p){
	cout << "P(x) ="<<p.a<<"x² + "<<p.b<<"x + "<<p.c<<endl;
}

float radicando(Polinomio p){
	float resultado;
	resultado = sqr(p.b)-(4*p.a*p.c);
	return resultado;
}
int main() {
    Polinomio miPolinomio;
    float miRadicando;
    
    leerPolinomio(miPolinomio);
    escribirPolinomio(miPolinomio);
    miRadicando = radicando(miPolinomio);
    
    cout << "El radicando es :" << radicando(miPolinomio) << endl;;
    if (miRadicando >= 0){
		cout << "El polinomio tiene raices reales" << endl; }
	else {
		cout << "El polinomio tiene raices imaginarias" << endl; }	
	return 0;
}


