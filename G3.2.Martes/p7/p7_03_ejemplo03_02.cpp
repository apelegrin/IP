#include <iostream>
using namespace std;

const int N = 20;
typedef char Frase [N];

int main () {
    int i;
    int cont;
    char EB;
    
    //Declaración e inicialización de la tabla t
    Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E',' ',' ',' '} ;
    
    //Iniciar tratamiento
    EB = ' ';
    cont = 0;
    cout << "[";
    for (i=0; i < N; i++){ 
		//tratamiento EA
		cout << t[i];
	    if(t[i] == EB){
			cont = cont + 1;
		}	
	}
	//Tratamiento final
	cout << "]";
	cout << endl;
	cout << "Encontradas " << cont << " repeticiones de [" << EB << "]"<< endl;
}	
	
	
	
	
	
	
