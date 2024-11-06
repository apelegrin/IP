#include <iostream>
//G4.2

using namespace std;

const int N=20;
typedef char Frase[N];

bool esVacia(Frase s){
	int i;
	i = 0;
	while ((i<N) && (s[i]==' ')){ //Si todo espacios frase vacía
		i = i + 1;
    }
    if (i == N-1){
		return true;
	}else {
		return false;}
}
	
int main() {
    /* Léxico */
	int i,contador;
	//Declaración e inicialización de la tabla t
	Frase EA = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E'} ;
	i = 0; //Comenzar;
	
	if (esVacia(EA)){  //secuencia vacía
			// {Tratamiento sec. vacía }
			cout << "Secuencia vacía" << endl;
	}else{
		
		do{//	REPETIR
			//{ Tratamiento de EA }
			cout << EA[i] << endl;
			if (EA[i] == ' '){
				contador = contador + 1;
			}
			i=i+1; //Avanzar
		} while (i < N); //Mientras no llegamos al último
	}//{ Terminación del tratto. }
	cout << "Encontrados "<<contador << endl;
	return 0;
}
	
	
	
	
	
	
	
	
	
