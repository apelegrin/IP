#include <iostream>

using namespace std;

const int LMAX = 100;
typedef float Vector[LMAX]; //100 posiciones 0..99
	
void leerVector(Vector &a, int n){
	int i;
	for (i=0;i<n;i++){
		cout << "Dame el elemento ["<<i<<"] ";
		cin >> a[i];
	}
};
	
void imprimirVector(Vector a, int n){
	int i;
	for (i=0;i<n;i++){
		cout << "Vector["<<i<<"]= ";
		cout << a[i] << endl;
	}
};
		
int main() {
    /* Léxico */
    const int N=5;
    Vector a,b;
    float producto;
    int i;
    
    leerVector(a,N);
    leerVector(b,N);
    
    imprimirVector(a,N);
    imprimirVector(b,N);
    
    producto = 0.0;
    for (i=0;i < N; i++){
		producto = producto + (a[i]*b[i]); 
	}
    cout << "El producto escalar es : " << producto << endl;
    
	return 0;
}
	
	
	
	
	
	
	
	
	
