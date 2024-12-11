/* Dada una secuencia marcada
 * ingreso - gasto, determinar
 * la primera semana donde gasto > ingreso 
 * 150 100 300 350 1100 500 500 200 -1
 * 150 100 300 250 1100 500 500 200 -1
 * */

#include <iostream>
using namespace std;
const int MF = -1;

int main(){
	/* Léxico */
	float EA, anterior;
	int semana;
	bool opera, encontrada;
    
    semana = 0;
    //Avanzar
    cin >> EA;
    //Trat secuencia vacía
	if (EA == MF) {
		cout << "ERROR: Secuencia vacía " << endl;
	}else{
		//Trat. diferenciado primer elemento
		anterior = EA;
		encontrada = false;
		//Avanzar
		cin >> EA;
		opera = true;
		//Buscar hasta MF o encontrada
		while ((EA != MF) && (!encontrada)){
			//Trat. EA
			if (opera){ //si es par
				cout << "Procesa "<<anterior<<" - "<<EA<<endl;
				if (EA > anterior){ //Si gastos > ingresos
					encontrada = true;
				}
				semana = semana + 1;
				opera = false;
			}else{//Si es impar guardo ingreso
				anterior = EA;
				opera = true;
			}
			//Avanzar
			cin >> EA;
		}
		if (encontrada){
			cout << "La semana "<<semana<<" el gasto > ingreso"<<endl;
		}else{
			cout << "No encontrada la semana con el gasto > ingreso"<<endl;
		}
	}//end_if sec vacía
}
