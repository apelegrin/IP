#include <iostream>
using namespace std;

const int N = 20;
typedef char Frase [N];

bool esUltimo(int i){
     bool ultimo;

     if (i == N){
		 ultimo = true;
     }
	 else{
		 ultimo = false;
     }
	 return ultimo;
}

int main () {
    int i;
    char EB;
    
    //Declaración e inicialización de la tabla t
    Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E',' ',' ',' '} ;
    
    //Iniciar tratamiento
    EB = ' ';
    cout << "[";
    i=0;//Comenzar
    while ( (!esUltimo(i)) && (t[i] != EB) ){ //MIENTRAS !es_ultimo
		//tratamiento EA
		cout << t[i];
		//Avanzar
		i = i + 1;
	}
	//Tratamiento final
	cout << "]";
	cout << endl;
	if (!esUltimo(i)){
		cout << "Encontrad [" << EB << "] en la posición " << i << endl;
	}else{
		cout << "No encontrado " << endl;
	}
}	
	
	
	
	
	
	
