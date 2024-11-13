#include <iostream>
/* Problema para tabla marcada */
using namespace std;

const int N = 20;
typedef int Vector [N];
const int MF = -1;

void imprimirVector(Vector p,int n){
    int i = 0;
    while (p[i] != MF){
		cout << p[i] << " ";
		i = i + 1;
	}
	cout << endl;
}

int main(){
	int i;
	int ultimo;
	int posiUltimo;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, -1} ;
	
	imprimirVector(t,N);
	cout << "--------" << endl;
	//Buscar el final
	i=0;
	while (t[i] != MF){
		i = i + 1; //Avanzar
	}
	posiUltimo = i;
	//Copiar desplazando
	ultimo = t[posiUltimo-1];//Tratamiento primer elem
	for(i = posiUltimo-1; i > 0; i--){
		t[i] = t[i-1];
	}
	t[0] = ultimo;
	cout << "--------" << endl;
	imprimirVector(t,N);
	
    return 0;
}
	
	
	
	
	
	
	
	
	
