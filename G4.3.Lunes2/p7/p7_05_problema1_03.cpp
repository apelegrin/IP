/* Rotar sin auxiliar */

#include <iostream>
using namespace std;

const int N = 11;
const int MF = -1;

typedef float Vector [N];
int i;

void printV(Vector p){
     int i;
     for (i=0; i < N; i++){
		cout << "nota[" << i << "]=" << p[i] << endl;
	 }
}

void printFrec(Vector p, int conta){
     int i;
     float frec;
     for (i=0; i < N; i++){
		if (p[i] > 0){ 
			frec = p[i]/conta * 100;
			cout << "nota[" << i << "]=" << p[i] << " -- "<< frec << endl;
		}
	 }
}

int buscaFrec(Vector p, int conta){
     int i;
     int posi;
     posi = -1;
     for (i=0; i < N; i++){
		if ( (p[i]/conta * 100) > 50.0){
				posi = i;
		}
	 }
	 return posi;
}

int main(){
	int i;
	Vector nota;
	int conta;
	int EA;
	/* Inicializamos la tabla a 0 */
	for (i = 0; i < N; i++){
		nota[i] = 0;
    }
    printV(nota);
    /* Recorrido 1er esquema 1er modelo */ 
    conta = 0;
    cin >> EA; //Comenzar
    while (EA != MF){
		//Tratamiento
		nota[EA] = nota[EA] + 1;
		conta = conta + 1;
		//Avanzar
		cin >> EA;
	}
    cout << "----------" << endl;
    printFrec(nota,conta);
    cout << "----------" << endl;
    cout << "Encontrada frec. en " <<buscaFrec(nota,conta)<<endl;;
}


