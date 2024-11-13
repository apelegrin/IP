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
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector z;
	imprimirVector(t,N);
	cout << "--------" << endl;
	//Copiar desplazando
	z[0] = t[N-1];//Tratamiento primer elem
	for(i = 1; i < N; i++){
		z[i] = t[i-1];
	}
	cout << "--------" << endl;
	imprimirVector(z,N);
	//Volcar z sobre t
	for(i = 0; i < N; i++){
		t[i] = z[i];
	}
	cout << "--------" << endl;
	imprimirVector(t,N);
    return 0;
}
	
	
	
	
	
	
	
	
	
