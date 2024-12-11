#include <iostream>
using namespace std;

int main(){
	// an = (2+n)/n
	/* Léxico */
	float i, n, an, suma;
	
	cout << "Introduce el nº de términos a suma ";
	cin >> n;
	
	suma = 0;
	i=1;
	while (i<=n){
		an = (2+i)/i;
		suma = suma + an;
		i = i + 1;
	}
	cout << "La suma es " << suma << endl;
	
	suma = 0;
	i=1;
	do{
		an = (2+i)/i;
		suma = suma + an;
		i = i + 1;
	}while(i<=n);
	cout << "La suma es " << suma << endl;
	
	suma = 0;
	for(i=1;i<=n;i++){
		an = (2+i)/i;
		suma = suma + an;
	}
	cout << "La suma es " << suma << endl;
}
