#include <iostream>

using namespace std;

const int N = 20;
typedef char Frase [N];


int main(){
    const char EB = ' ';
    const char MF = '#';
    int i;
    //Declaración e inicialización de la tabla t
    Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
    //Búsqueda marcada
    //Comenzar
    i = 0;
    while ((t[i] != MF) && (t[i] != EB) ){
		//Avanzar
		i = i + 1;
	}
	if (t[i] == EB){
	  cout << "Encontrado en " << i << endl;
	}
    return 0;
}
	
	
	
	
	
	
	
	
	
