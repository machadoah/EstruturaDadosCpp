#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

5.	Desenvolver um programa onde voc� entre via teclado com dois valores e ap�s a digita��o o usu�rio escolha um seletor de op��o (menu) com as seguintes op��es:

	- Multiplica��o;

	- Adi��o;

	- Divis�o;

	- Subtra��o;

	- Fim do processo;

	Obs. Criar um m�todo para cada op��o e dentro do case chamar as fun��es respectivamente.
	
*/

// M�TODO MULTIPLICA��O

double multiplicacao(double x, double y){
	
	cout << endl << "Insira o 1� n�mero: ";
	
	return 
}

// M�TODO ADI��O

// M�TODO DIVIS�O

// M�TODO SUBTRA��O



// M�TODO MAIN
int main(){
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    int ano;
    cout << endl << "Insira o ano: ";
    cin >> ano;
    
    if (calcula_bissexto(ano) == 1) {
    	cout << endl << ano << " � bissexto";
    	
	} else {
		cout << endl << ano << " n�o � bissexto";
	}

	
	return 0;
}

