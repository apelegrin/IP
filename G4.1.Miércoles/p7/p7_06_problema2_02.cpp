#include <iostream>
/* Problema para calcular frec absolutas */
using namespace std;

const int N = 11;
typedef float Vector [N];

void imprimirVector(Vector p,int n){
    int i;
    for (i=0;i < N;i++){
		cout << "notas["<<i<<"]="<<p[i]<< endl;
	}
	cout << endl;
}

void imprimirFrecu(Vector p,int conta,int N){
	 int i;
	 float f;
	 for (i=0;i < N;i++){
		f = p[i] / conta * 100;
		cout << "notas["<<i<<"]="<<f<< endl;
	}
	cout << endl;
}

int main(){
	/* Léxico */
	const int MF = -1;
	int i;
	int EA;
	int conta;
	
	Vector notas;
    //Recorrido sec. entrada estándar
    //1er esquema 1er modelo
    //Tratamiento inicial
    //Inicializar las frec. absolutas
    for(i=0; i<N; i++){
		notas[i] = 0;
	}
	conta = 0;
    cin >> EA;//Comenzar
	while (EA != MF){//MIENTRAS EA != MF HACER
		//  Trata elemento actual
		notas[EA] = notas[EA] + 1;
		conta = conta + 1;
		cin >> EA; //  Avanzar
	}//FIN_MIENTRAS
	
	imprimirVector(notas,N);
	imprimirFrecu(notas,conta,N);
    return 0;
}
	
	
	
	
	
	
	
	
	
