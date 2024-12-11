/* Dada una secuencia marcada
 * ingreso - gasto, determinar
 * el gasto medio
 * 150 100 300 350 1100 500 500 200 -1
 * 150 100 300 250 1100 500 500 200 -1
 * */

#include <iostream>
using namespace std;
const int MF = -1;

int main(){
	/* Léxico */
	float EA;
	int semana;
    float suma, media;
    bool opera;
        
    //Avanzar
    cin >> EA;
    //Trat secuencia vacía
	if (EA == MF) {
		cout << "ERROR: Secuencia vacía " << endl;
	}else{
		//inicializar
		suma = 0;
		semana = 0;
		//trat primer elemento
		opera = true; //Asumo que hay un 2º dato
		do{
			//Avanzar
			cin >> EA;
			if (EA == MF){ break; }
			//Entrada par tratar
			if (opera){
			  cout << "Sumando " << EA << endl;
			  suma = suma + EA;
			  semana = semana + 1;
			  opera = false;
			}else{
			  opera = true;
			}
		}while(true);
		//Determinar la media
		if (semana > 0){
			media = suma / semana;
			cout << "La media de gasto es " << media << endl;
		}else{
			cout << "Gastos no encontrados " << endl;
		}
		    
		
	}//end_if sec vacía
}
