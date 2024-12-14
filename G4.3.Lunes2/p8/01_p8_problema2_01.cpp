#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int NPlantas = 7;
const int NHabitaciones = 20;

struct Habitacion {
	int numero;
	int tipo;
	int camasLibres;
};

/* Definimos tipo hospital */
typedef Habitacion Hospital[NPlantas][NHabitaciones];

void generarHospital(Hospital &hospital){
     int nPlanta, nHabita;
     int libres;
     /* Inicializa el generador de números aleatorios */
     srand(time(0));
     
     for(nPlanta = 0; nPlanta < NPlantas; nPlanta++){
	    for (nHabita = 0; nHabita < NHabitaciones; nHabita++){
	        hospital[nPlanta][nHabita].numero = (nPlanta+1)*100+(nHabita+1);
	        /* nº aleatorio de 0 a 2 que son tres tipos */
	        hospital[nPlanta][nHabita].tipo = (rand() % 3) + 1;
	        /* generar el nº de libres en funcion del tipo de 0 a max tipo*/ 
	        libres = rand() % (hospital[nPlanta][nHabita].tipo + 1 );
	        hospital[nPlanta][nHabita].camasLibres = libres;
	    }
	 }
}

void printHospital(Hospital hospital){
     int nPlanta, nHabita;
     int conta;
     
     for(nPlanta = NPlantas-1; nPlanta >= 0; nPlanta--){
		cout << "P:" << nPlanta + 1 << endl;
		conta = 0;
	    for (nHabita = 0; nHabita < NHabitaciones; nHabita++){
			conta = conta + 1;
			cout << "[";
	        cout << hospital[nPlanta][nHabita].numero;
	        cout << ",";
	        cout << hospital[nPlanta][nHabita].tipo;
	        cout << ",";
	        cout << hospital[nPlanta][nHabita].camasLibres;
	        cout << "]";
	        if (conta == 10){ cout << endl; };
	    }
	    cout << endl;
	 }
}

int buscarHabitacion(Hospital hospital,int miembros){
    int fila, col;
    bool encontrada;
    int num;
    
    num = -1;
    encontrada = false;
    fila = 0;
    while ( (fila < (NPlantas - 1)) && (!encontrada) ){
		col = 0;
		while ( (col < (NHabitaciones - 1)) && (!encontrada) ){
			if (hospital[fila][col].camasLibres == miembros){
				encontrada = true;
				num = hospital[fila][col].numero;
			}
			col = col + 1;
		}
		fila = fila + 1;
	}
	return num;

};
int main() {
	Hospital hospital;
    int miembros;
    
    generarHospital(hospital);
    printHospital(hospital);
    
    do{
		cout << "Nº miembros (max 3)";
		cin >> miembros;
		cout << "Habitación: ";
		cout << buscarHabitacion(hospital,miembros);
		cout << endl;
    }while (miembros > 0);
return 0;
}
