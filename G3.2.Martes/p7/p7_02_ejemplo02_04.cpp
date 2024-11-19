#include <iostream>
using namespace std;

const int N = 20;
typedef char Frase [N];

void leerFrase(Frase &t){
     const char EOL = char(10);
     int i;
     char c;
     
     cout << "Frase :";
     i=0;
     cin.get(c); //Comenzar
     while ( (c != EOL) && (i<N-2) ){
         t[i] = c;   //Registrar
         i = i + 1; 
         cin.get(c); //Avanzar
     }
     t[i] = '#'; //Marcar;
		 
}

int main () {
    const char MF = '#';
    int i;
    int cont;
    char EB;
    
    //Declaración e inicialización de la tabla t
    //Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
    Frase t;
    leerFrase(t);
    
    //Iniciar tratamiento
    EB = 'A';
    cont = 0;
     
    i=0;//Comenzar
    while (t[i] != MF){ //MIENTRAS EA_S != MF
		//tratamiento EA
		cout << t[i];
	    if(t[i] == EB){
			cont = cont + 1;
		}	
		//Avanzar
		i = i + 1;
	}
	//Tratamiento final
	cout << endl;
	cout << "Encontradas " << cont << " repeticiones de "<< EB << endl;
}	
	
	
	
	
	
	
