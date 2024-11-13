#include <iostream>
/* Problema para calcular frec absolutas */
using namespace std;

const int N = 11;
typedef int Vector [N];

void imprimirVector(Vector p,int n,int MF){
    int i;
    for (i=0;i < N;i++){
		cout << "notas["<<i<<"]="<<p[i]<< endl;
	}
	cout << endl;
}

int main(){
	/* Léxico */
	const int MF = -1;
	int i;
	int EA;
	Vector notas;
    //Recorrido sec. entrada estándar
    //1er esquema 1er modelo
    //Tratamiento inicial
    //Inicializar las frec. absolutas
    for(i=0; i<N; i++){
		notas[i] = 0;
	}
    cin >> EA;//Comenzar
	while (EA != MF){//MIENTRAS EA != MF HACER
		//  Trata elemento actual
		notas[EA] = notas[EA] + 1;
		cin >> EA; //  Avanzar
	}//FIN_MIENTRAS
	
	imprimirVector(notas,N,MF);
    return 0;
}
	
	
	
	
	
	
	
	
	
