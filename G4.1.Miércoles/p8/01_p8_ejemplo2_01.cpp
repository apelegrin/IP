#include <iostream>
#include <map>

using namespace std;

enum DiasSemana { lunes, martes, miercoles, jueves, viernes, sabado, domingo };

typedef map <DiasSemana, map <char, float> > MiTipoTabla;
	
int main(){

	MiTipoTabla t;
	DiasSemana d;
    char c;
    
    
    for (d=lunes; d <= domingo; d = DiasSemana(d+1)){
		for (c = 'a'; c <= 'z'; c++) {
			t[d][c] = 0.0;
		}
	}
	

	//poner todas las p a 1
	for (d=lunes; d <= domingo;d = DiasSemana(d+1)){
		t[d]['p']= 1.0;
	}
	
	for (d=lunes; d <= domingo;d = DiasSemana(d+1)){
		cout << "Fila "<<d;
		for (c = int('a'); c <= int('z'); c++) {
			cout << " " << t[d][c];
		}
		cout << endl;
	}
	
}
