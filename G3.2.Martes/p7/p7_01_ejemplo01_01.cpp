#include <iostream>

using namespace std;

const int LMAX = 100;
typedef float Vector[LMAX];

void leerVector(Vector &a,int N){
  int i;
  for (i = 0;i < N; i++){
		cout << "Elemento ["<<i<<"]= ";
		cin >> a[i];
  }
}

void imprimirVector(Vector a,int N){
  int i;
  for (i = 0;i < N; i++){
		cout << "Elemento ["<<i<<"]= ";
		cout << a[i] << endl;
  }
}
int main() {
	/* Léxico*/
    const int N = 4;
    Vector a,b;
    int i;
    int producto;
    
    leerVector(a,N);
    imprimirVector(a,N);
    leerVector(b,N);
    imprimirVector(b,N);
    producto = 0;
    for (i=0; i < N; i++){
		producto = a[i]*b[i] + producto;
	}
    cout << "El producto escalar es: " << producto << endl;
    
    return 0;
}
	
	
	
	
	
	
	
	
	
