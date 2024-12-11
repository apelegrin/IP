/* Programa de gestión de camas de un hospital*/
#include <iostream>
#include <cstdlib>

using namespace std;

const int NPlantas = 7; /* constante con el número de plantas */
const int NHabita = 20; /* constante con el número de habitaciones por planta */

struct Habitacion {
	int numero;
	int tipo;
	int libres;
};

typedef Habitacion Hospital[NPlantas][NHabita]; /*Tipo tabla*/

void crearHospital(Hospital &hospital){
    int np, nh;
    
    for (np=0; np < NPlantas; np++){
		for (nh=0; nh < NHabita; nh++){
			hospital[np][nh].numero = 
					(np+1)*100+(nh+1);
			/* tipo de 1 a 3*/
			hospital[np][nh].tipo = (rand() % 3) + 1;
			/* libres de 0 a tipo*/
			hospital[np][nh].libres = 
				rand() % (hospital[np][nh].tipo + 1);
		}
	}
}

void printHospital(Hospital hospital){
    int np, nh, conta;
    /* Imprimir de la 7 a la 1*/
    for (np=NPlantas-1; np >= 0; np--){
		cout << "P" << (np+1) << endl;
		conta = 0;
		for (nh=0; nh < NHabita; nh++){
			cout << "[";
			cout << hospital[np][nh].numero;
			cout << ",";
			cout << hospital[np][nh].tipo;
			cout << ",";
			cout << hospital[np][nh].libres;
			cout << "]";
			conta = conta + 1;
			if (conta == 10) {cout << endl;}
		}
		cout << endl;
	}
}

int buscarHospital(Hospital hospital,int personas){
    int np, nh, cama;
    bool encontrada;

    encontrada = false;
    cama = -1;
    np=0;
    while ( (np < NPlantas)&&(!encontrada) ){
		nh = 0;
		while ( (nh < NHabita)&&(!encontrada) ){
			if (hospital[np][nh].libres >= personas){
				encontrada = true;
				cama = hospital[np][nh].numero;
			}
			nh = nh + 1;
		}
		np = np + 1;
	}
	return cama;
}

void ocuparCama(Hospital &hospital,int cama,int personas){
	int p,h;
	p = (cama / 100) - 1;
	h = (cama - ((p+1)*100) ) - 1;
	hospital[p][h].libres = hospital[p][h].libres - personas;
}

int main(){
	Hospital hospital;
	int personas;
	int cama;
	
	crearHospital(hospital);
	printHospital(hospital);
	do{
		cout << endl;
		cout << "Nº de personas a alojar > ";
		cin >> personas;
	    cama = buscarHospital(hospital,personas);
	    cout << "Asignada la habitación = " << cama << endl;
	    if (cama > 0){
			ocuparCama(hospital,cama,personas);
			printHospital(hospital);
		}
	}while (personas > 0);
}







