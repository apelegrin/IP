#include <iostream>

using namespace std;

const int N = 20;
typedef char Frase [N];


int main(){
    const char EB = ' ';
    int i;
    int conta;
    //Declaración e inicialización de la tabla t
    Frase t = { 'E','L',' ','S','O','L',' ','S','E',' ','E','S','C','O','N','D','E','#'} ;
    conta = 0;
    for (i=0; i < N; i++ ){
		//Tratamiento EA
		cout << t[i] << ' ';
		if (t[i] == EB){
			conta = conta + 1;
		}
	}
	cout << "Encontradas " << conta << endl;
    return 0;
}
	
	
	
	
	
	
	
	
	
