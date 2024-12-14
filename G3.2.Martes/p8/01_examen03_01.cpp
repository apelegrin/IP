#include <iostream>

using namespace std;

const float MF = -1;

int main(){
	/*Lexico*/
	float EA;
	int procesa;
	int semana;
    float media,suma;
    	
	//Trat. Inicial
	semana = 0;
	suma = 0;
	//Avanza
	cin >> EA;
	//Trat secuencia vacía
	if (EA == MF){
		cout << "ERROR: Secuencia vacía" << endl;
	}else{
		//Trat. diferenciado primer elemento
		procesa = 1;
        do {
			//avanzar
			cin >> EA;
			if (EA == MF){break;}
			//tratamiento EA
			procesa = procesa + 1;
			if ((procesa % 2) == 0){
				suma = suma + EA;
				semana = semana + 1;
			}
		}while(true);
		if (suma > 0){
			media = suma / semana;
		}else{
			media = 0;
		}
		cout << "Has gastado una media de " << media << endl;
	}
}


