#include <iostream>
//G4.2

using namespace std;

const int N=20;
typedef char Frase[N];

	
int main() {
    /* Léxico */
    const char MF = '#';
	int i;
	//Declaración e inicialización de la tabla t
	Frase EA = { 'E','L','_','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
	//Primer esquema primer modelo
	i = 0; //Comenzar;
	while ((EA[i] != MF) && (EA[i] != ' ')){//Búsqueda
		cout << "EA["<<i<<"]="<<EA[i]<<endl;
		i++;//Avanzar
	}
	//{ Tratamiento posterior }
	if (EA[i] == '#'){
		cout << "Elemento no encontrado " << endl;
	}else {
		cout << "Elemento encontrado en " << i << endl;
	}
	return 0;
}
//Próximo día búsqueda de secuencia no marcada
	
	
	
	
	
	
	
	
	
