#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

3.	Um n�mero primo � qualquer inteiro divis�vel por si pr�prio e por 1. 
	Escreva um m�todo que receba um inteiro positivo e, se este n�mero for primo retorne 1, caso contr�rio retorne 0.
	
*/

// CHAMADA DO M�TODOS
int verifica_primo(int numero);


// M�TODO MAIN
int main(){
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    int numero;
    
    cout << endl << "Ol�, insira um numero inteiro e positivo e te direi se ele � impar ou par!: ";
    cin >> numero;
    
    verifica_primo(numero);
	
	return 0;
}

// M�TODO PRIMO

int verifica_primo(int numero) {
	
	int div = 0;
	
	for(int index = 1; index <= numero; index++){
		
		if(numero % index == 0) {
			div ++;
		}
		
	}
	
	if(div == 2) {
		cout << endl << numero << " � primo!";
		
		return 1;
		
	} else {
		cout << endl << numero << " n�o � primo!";
		
		return 0;
	}

}



