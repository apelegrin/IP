#include <iostream>
using namespace std;

const int N = 10;
typedef int Vector [N];

void imprimeV(Vector p, char n){
     int i;
     for (i=0; i<N; i++){
       cout << n << "[" << i << "]=" << p[i] << endl;
     }
}
int main () {
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector z;
	int i;
	
	imprimeV(t,'t');
	
	cout << "----------------" << endl;
	for (i=1;i < N;i++){
	   z[i] = t[i-1];
	}
	z[0] = t[N-1]; 
	
	imprimeV(z,'z');
	cout << "----------------" << endl;
	
}	
	
	
	
	
	
	
