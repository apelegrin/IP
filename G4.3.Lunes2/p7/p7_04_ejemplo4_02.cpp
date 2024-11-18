/* Rotar sin auxiliar */

#include <iostream>
using namespace std;

const int N = 10;
typedef int Vector [N];
int i;

void printV(Vector p,char nom){
     int i;
     for (i=0; i < N; i++){
		cout << nom << "[" << i << "]=" << p[i] << endl;
	 }
}

int main(){
	int i;
	int ultimo;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;

	printV(t,'t');
	ultimo = t[N-1];
	for (i=1;i< N; i++){
		t[i] = t[i-1];
	}
	t[0] = ultimo;
	cout << "--------------" << endl;;
    printV(t,'t');
    
}


