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

int main () {

	int i;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector z;

	cout << "-----------------" << endl;
	z[0] = t[N-1];
	for (i=1; i<N; i++){
		z[i] = t[i-1];
	}
	imprimirVector(t,N,'t');
	cout << "-----------------" << endl;
	imprimirVector(z,N,'z');
	for (i=0; i<N; i++){
		t[i] = z[i];
	}
	cout << "-----------------" << endl;
	imprimirVector(t,N,'t');
}
