#include <iostream>

using namespace std;

int Max2 (int a, int b)
{
	int mayor;
	if (a > b) {
		mayor = a; }
	else {
		mayor = b; }
		
	return mayor;
}

int Max3 (int a, int b, int c){
    int max1;
    max1 = Max2(a,b);
    
    // return Max2(Max2(a,b),c);
    
    return Max2(max1,c);

}
	
int main () {
	//Léxico
	int x, y, z;
		
	//Algoritmo
	cout << "Dame tres números enteros  >";
	cin >> x >> y >> z;
	cout << "Pensando" << endl;
	cout << "El mayor es :" << Max3(x,y,z) << endl;
	
}


