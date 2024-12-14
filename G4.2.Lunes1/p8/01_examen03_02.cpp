#include <iostream>

using namespace std;

const float MF = -1;

int main(){
	/*Lexico*/
	float EA;
	bool procesa;
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
		procesa = true;
        do {
			//avanzar
			cin >> EA;
			if (EA == MF){break;}
			//tratamiento EA
			if (procesa){
				suma = suma + EA;
				semana = semana + 1;
				procesa = false;
			}
			else{
				procesa = true;
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


