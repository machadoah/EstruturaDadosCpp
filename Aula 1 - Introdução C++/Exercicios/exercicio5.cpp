#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 5.	Escreva um programa que solicite ao usu�rio um valor inteiro e informe se esse n�mero � par ou �mpar.
	
	int n;
	
	cout << "Ol�, forne�a um numero inteiro e descubrirei se ele � par ou impar! Duvida? ent�o vamos l�! " << endl << "Forne�a o n�mero: ";
	cin >> n;
	
	if(n % 2 == 0){
		
		cout << "O n�mero " << n << " � PAR!";
		
	} else {
		
		cout << "O n�mero " << n << " � IMPAR!";
	} ;
	
	return 0;
}
