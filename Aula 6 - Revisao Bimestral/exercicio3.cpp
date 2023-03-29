#include <cstdlib> 
#include <iostream>
#include <math.h>

using namespace std;

/*Fa�a um m�todo que verifique quantas vezes um n�mero � 
divis�vel pelo intervalo de 1 at� ele mesmo, ele ser� um dados passado como par�metro do m�todo */

// M�todo que calcula as vezes que um numero n � divisivel no intervalo inteiro de 1 at� n
int numeroDivisoes (int number) {
	
	int vezes = 0 ;
	
	for(int index = 1; index <= number; index++) {
		
		if(number % index == 0) {
			vezes++;	
		}		
	}	
	return vezes;	
}


int main(int argc, char** argv) {
	
	int number;
	
	cout << "Digite um numero: ";
	cin >> number;
	
	cout << endl << "O numero " << number << " teve " << numeroDivisoes(number) << " divisoes de 1 ate ele.";
	
	return 0;
}
