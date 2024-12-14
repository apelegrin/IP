#include <iostream>

using namespace std;

int main(){
	/*Lexico*/
	float i, suma, an, n;
 
	cout << "Dame el valor de n ";
	cin >> n;
	
	suma = 0;
	i=1;
	while (i <= n){
		an = (2+i)/i;
		suma = suma + an;
		i = i + 1;
	}
	cout << "La suma de los " << n << " términos es " << suma << endl;
    
    suma = 0;
	i=1;
    do {
		an = (2+i)/i;
		suma = suma + an;
		i = i + 1;
	}while (i <= n);
	cout << "La suma de los " << n << " términos es " << suma << endl;
}
