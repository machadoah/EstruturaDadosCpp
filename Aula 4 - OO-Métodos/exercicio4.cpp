#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

4.	Escreva um m�todo que receba o ano e retorne 1 se for bissexto e 0 se n�o for. 
	Um ano � bissexto quando divis�vel por 4, mas n�o por 100. Um ano tamb�m � bissexto quando divis�vel por 400.
	
*/

// M�TODO ANO BISSEXTO

int calcula_bissexto(int ano){
	
	if(((ano % 4 == 0) && (ano % 100 != 0)) || ano % 400 == 0 ){
		return 1;
		
	} else {
		
		return 0;
	}
	
}

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





