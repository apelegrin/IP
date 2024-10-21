#include <iostream>
using namespace std;

void divisionEntera(int dividendo,int divisor,
					int &cociente,int &resto){
	 cociente = 0;
	 resto = 0;
	 while (dividendo >= divisor){
		dividendo = dividendo - divisor;
		cociente = cociente + 1;
	 }
	 resto = dividendo;
		 
};

int main(){
	//Léxico
	int dividendo, divisor;
	int cociente, resto;
	
	cout << "Dividendo y divisor > ";
	cin >> dividendo >> divisor;
	divisionEntera(dividendo,divisor,cociente,resto);
	cout << dividendo << " / " << divisor 
	     << " = " << cociente << endl;
	cout << "resto " << resto << endl;
	return 0;
}
