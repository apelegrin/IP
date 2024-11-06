#include <iostream>
using namespace std;
int main () {
	/* Léxico */
	const int MARCA_FIN = -1;
	int p, m, u, EA;
	/* Algoritmo */
    cin >> EA; //Comenzar
    if (EA == MARCA_FIN){
	   //Tratamiento sec. vacía
	   cout << "Secuencia vacía" << endl; 
	}
	else{
      p = 1; m = 1; u = EA;
      do{
		 cin >> EA; 
		 if (EA == MARCA_FIN){ break;}
		 if (EA == u){ 
			 m= m + 1;}
		 else{
			 m = 1;}
			 if (m > p){
				 p = m; }
		 u = EA;	 	 
	  }while(true);
	  //Tratamiento posterior
	  cout << "Meseta máxima " << p << endl;
	}//end-else
}


