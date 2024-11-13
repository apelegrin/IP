#include <iostream>

using namespace std;

const int LMAX = 100;
typedef float Vector[LMAX];

void leerVector(Vector &a, int n){
    int i;
    for (i = 0; i < n; i++){
		cout << "Elemento ["<<i<<"]= ";
		cin >> a[i];
	}

}

void imprimeVector(Vector a, int n){
    int i;
    for (i = 0; i < n; i++){
		cout << "Elemento ["<<i<<"]= ";
		cout << a[i] << endl;
	}

}

int main(){
    /* Léxico */
    const int N = 4;
    Vector a,b;
    int i;
    float producto;
    
    leerVector(a,N);
    //Leer(a)
    cout << "---------------" << endl;
    leerVector(b,N);
    //Leer(b)
    cout << "---------------" << endl;
    //Escibir(a,b)
    imprimeVector(a,N);	
    imprimeVector(b,N);	
    cout << "---------------" << endl;
    //Calcular el producto escalar
    producto = 0;
    //for (i = 0; i < N; i++)
    i = 0; //Comenzar
    while (i < N){
		producto = producto + a[i]*b[i];
		i = i + 1; //Avanzar
	}
	cout << "El producto escalar es " << producto << endl;
    return 0;
}
	
	
	
	
	
	
	
	
	
