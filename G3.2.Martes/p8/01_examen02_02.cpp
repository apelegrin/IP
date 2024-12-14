#include <iostream>

using namespace std;

const float MF = -1;

int main(){
	/*Lexico*/
	float EA, anterior;
	int semana;
	int procesa;
	bool encontrada; /* variable de dato encontrado */
	
	//Trat. Inicial
	semana = 0;
	encontrada = false;
	//Avanza
	cin >> EA;
	//Trat secuencia vacía
	if (EA == MF){
		cout << "ERROR: Secuencia vacía" << endl;
	}else{
		//Trat. diferenciado primer elemento
        anterior = EA;
		procesa = 2;
		//Avanza
		cin >> EA;
		while ((EA != MF) && (!encontrada)){
			if ((procesa % 2) == 0){
				cout << "Procesa " << anterior << " - " << EA << endl;
				if ((anterior - EA) < 0){
					encontrada = true;
				}
				semana = semana + 1;
			}else{
				anterior = EA;
			}
			procesa = procesa + 1;
			//Avanza
			cin >> EA;
		}//end_while
		if (encontrada){
			cout << "La semana " << semana;
			cout << " has gastado más que ingresaste" << endl;
		}else{
			cout << "NO has gastado más que ingresaste" << endl;
		}
	}
}


