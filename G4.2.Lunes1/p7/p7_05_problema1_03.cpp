#include <iostream>
using namespace std;

const int N = 10;
typedef int Vector [N];

void imprimirVector(Vector p, int N,char m){
	int i;
	for (i=0;i<N;i++){
		cout << m<<"["<<i<<"]="<<p[i]<<endl;
	}
}
/* Mala aproximación*/
int main () {
	int i;
    int aux;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
    imprimirVector(t,N,'t');
	aux = t[N-1];
	for (i=N-1; i>0; i--){
		t[i] = t[i-1];
	}
	t[0] = aux;
	cout << "-----------------" << endl;
	imprimirVector(t,N,'t');
}
