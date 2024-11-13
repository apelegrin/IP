#include <iostream>

using namespace std;

const int N = 10;
typedef int Vector [N];

void imprimirVector(Vector p,int n){
    int i = 0;
    for (i=0; i < n; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}
int main(){
	int i;
	int ultimo;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	
	imprimirVector(t,N);
	cout << "--------" << endl;
	//Copiar desplazando
	ultimo = t[N-1];//Tratamiento primer elem
	for(i = N-1; i > 0; i--){
		t[i] = t[i-1];
	}
	t[0] = ultimo;
	cout << "--------" << endl;
	imprimirVector(t,N);
	
    return 0;
}
	
	
	
	
	
	
	
	
	
