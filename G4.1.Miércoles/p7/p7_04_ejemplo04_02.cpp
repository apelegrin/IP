#include <iostream>

using namespace std;

const int N = 20;
typedef char Frase [N];


int main(){
    const char EB = ' ';

    int i;
    //Declaración e inicialización de la tabla t
    Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
    //Búsqueda por final
    //Comenzar
    i = 0;
    while ( (i < N) && (t[i] != EB) ){
		cout << t[i];
		//Avanzar
		i = i + 1;
	}
	if (t[i] == EB){
	  cout << "< Encontrado en " << i << endl;
	}
    return 0;
}
	
	
	
	
	
	
	
	
	
