#include <iostream>

using namespace std;

//{ PRE a=X, y=Y / X,Y : Entero }
//{ POST a>b Max2 <-a; a<=b Max<- b}

int Max2 (int a, int b){
	int mayor;
	
	if (a > b) {
		mayor = a;
	}else {
		mayor = b;
	}	
	return mayor;
}

int Max3 (int a, int b, int c){
	int mayor;
	
	mayor = Max2(a,b);
	mayor = Max2(mayor,c);
	return mayor;
	//return Max2(Max2(a,b,),c);
}

int main () {
    int o, p ,q;
    cout << "Dame tres valores ";
    cin >> o >> p >> q;
    cout << "El mayor es " << Max3(o,p,q) << endl;
	return 0;
}


