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
		if (p[i] > 0){
			f = p[i] / conta * 100;
			cout << "notas["<<i<<"]="<<f<< endl;
		}
	}
	cout << endl;
}

int buscaFrec(Vector p, int N){
	int total;
	int i;
	int posi;
	float f;
	
	/* Determinar la suma de las frec absolutas */
	total = 0;
	for (i = 0; i< N; i++){
	     total = total + p[i];
	}
	//Buscar la 1a frec relativa > 50%
	i=-1; //Iniciar
	do{
		//Avanzar
		i = i + 1;
		//Trata EA
		f = p[i] / total * 100;
	}while( (i < N) && (f < 50.0) );
	//Evaluar cond de fin
	if (i < N){
		posi = i;
	}else{
		posi = - 1;
	}
	return posi;
}

int main(){
	/* Léxico */
	const int MF = -1;
	int i;
	int EA;
	int conta;
	int posi;
	
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
	/* Buscar f > 50.% */
	posi = buscaFrec(notas,N);
	if ( posi < 0){
		cout << "No encontrada frec. > 50%" << endl;
	}else{
		cout << "Encontrada frec. > 50% en " <<
		      posi << " = " << notas[posi] / conta * 100 << endl;
	}
    return 0;
}
	
	
	
	
	
	
	
	
	
