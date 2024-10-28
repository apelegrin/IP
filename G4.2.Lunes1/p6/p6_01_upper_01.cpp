#include <iostream>

using namespace std;
	
int main (){
	/* Léxico */
	const char MF='#';
	const int Distancia = int('a') - int('A');
	
	char EA;
	char cConv;
	
	//cin >> EA; //Comenzar;
	cin.get(EA);
	//MIENTRAS EA ≠ MarcaFin HACER
	while (EA != MF){
		//{ Tratamiento de EA }
		if ((EA >= 'a') && (EA <= 'z')){
			cConv = char(int(EA) - Distancia);
		}
		else {
			cConv = EA;
		}
		cout << cConv;	
		//cin >> EA; //Avanzar
		cin.get(EA);
	}//FIN_MIENTRAS;
	//{ Terminación del tratamiento }*
}
	
	
	
	
	
	
	
	
	
