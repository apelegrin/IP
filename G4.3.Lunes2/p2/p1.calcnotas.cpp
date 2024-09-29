/*
 * Programa para calcular la calificación final
 * 
 * */
#include <iostream>
using namespace std;
int main () {
	//Léxico
	float notaTeoria;
	float notaPractica;
	float notaFinal; //variable para la nota final
	
	//Algoritmo
	//{pre} notaPractica y notaTeoria tengan valores válidos
	//      en un rango adecuado
	//{post} notaFinal se ha calculado atendiendo a las especificaciones
	
	cout << "Introduce la nota de teoría y la de prácticas: ";
	cin >> notaTeoria >> notaPractica;
	notaFinal = notaTeoria * 0.7 + notaPractica * 0.3;
	cout << notaFinal << endl;
	
	return 0;

}








