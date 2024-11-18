#include <iostream>
//G4.2

using namespace std;

const int N=20;
typedef char Frase[N];
/* Dimensión N de una tabla marcada */
bool esUltimo(int i, int N){
	bool ultimo;
	if (i == (N-2)){
		ultimo = true;
	}else{
		ultimo = false;
	}
	return ultimo;
}
	
int main() {
    /* Léxico */
	const char EB = ' ';
	int i;
	
	//Declaración e inicialización de la tabla t
	Frase EA = { 'E','L','_','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;

	//Primer esquema primer modelo
	i = 0; //Comenzar;
	while ((!esUltimo(i,N)) && (EA[i] != EB)){//Búsqueda
		cout << "EA["<<i<<"]="<<EA[i]<<endl;
		i++;//Avanzar
	}
	//{ Tratamiento posterior }
	if (esUltimo(i,N)){
		cout << "Elemento no encontrado " << endl;
	}else {
		cout << "Elemento encontrado en " << i << endl;
	}
	return 0;
}
//Próximo día búsqueda de secuencia no marcada
	
	
	
	
	
	
	
	
	
