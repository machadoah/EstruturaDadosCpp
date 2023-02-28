#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	/*
		6. Escreva um programa que solicite ao usu�rio a idade de uma pessoa e informe se essa pessoa �:  
			- crian�a (0 a 11 anos)
			- adolescente (12 a 17 anos)
			- adulta (18 a 49 anos)
			- idosa (a partir de 50 anos). 
	*/
	
	double idade;
	
	cout << "Ol�, tudo bem?" << endl << "Me informe sua idade que irei te informar (perante dados fornecidos) em qual faixa et�ria voc� faz parte: ";
	cin >> idade;
	
	if (idade <= 11) {
		cout << "Voc� � crian�a, pois est� na faixa et�ria de 0 a 11 anos.";
	} else if (idade <= 17) {
		cout << "Voc� � adolescente, pois est� na faixa et�ria de 12 a 17 anos.";
	} else if (idade <= 49) {
		cout << "Voc� � adulto, pois est� na faixa et�ria de 18 a 49 anos.";
	} else {
		cout << "Voc� � idoso, pois est� em uma faixa et�ria superior a 50 anos.";
	};
		
	return 0;
}
