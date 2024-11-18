#include <iostream>
using namespace std;

const int N = 11;
typedef float Notas [N];

int buscaNota(Notas p, int N, int total){
	const float EB = 0.5;
	int i, posi;
	posi = -1;
	i=0;
	while ( (i<N-1) && ((p[i]/total) < EB) ){
		i++;
	}
	//Si no encontrado
	if (i==N-1){
		posi = -1;
	}else{
		posi = i;
	}
	return posi;
}

void imprimirFrecuencias(Notas p, int N, int total){
	int i;
	float frec;
	
	for (i=0;i<N;i++){
		if (p[i] > 0) {
		  frec = p[i] / total * 100;
		  cout << "["<<i<<"]="<< frec <<endl;
		}
	}
}

int main () {
	const int MF = -1;
    int i;
    int EA;
    int conta;
    
    Notas nota;
    /* establecer todos los valores a 0 */
    for (i=0;i<N;i++){
		nota[i] = 0;
	}
	conta = 0;
	cin >> EA; //Comenzar
    while (EA != MF){
		//Tratar
		nota[EA] = nota[EA] + 1;
		conta = conta + 1;
		//Avanzar
		cin >> EA;
	}
	imprimirFrecuencias(nota, N, conta);
    cout << "Buscando Nota " << buscaNota(nota,N,conta) << endl;
}
