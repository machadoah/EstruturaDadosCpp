#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 7.	Escreva um programa que solicite ao usu�rio um ano qualquer e informe se esse ano � bissexto. 
			
			// Um ano � considerado bissexto se ele for divis�vel por quatro, mas n�o por 100. Ou ent�o se ele for divis�vel por 400.
			
	int ano;
			
	cout << "Voc� aposta quantos eu descobrir se um ano qualquer � bissexto ou n�o? Duvida?" << endl << "Vamos l�, informe um ano: ";
	cin >> ano;
	
	
	// divisivel por 4   e   n�o por 100      ou  divisivel por 400
	if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0) ) {
		cout << "O ano informado � bissexto! portanto, tem 366 dias";
	} else {
		cout << "O ano informado n�o � bissexto!";
	};
	
	
	return 0;
}
