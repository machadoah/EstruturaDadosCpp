#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 2.	Crie um programa que solicite ao usu�rio os lados de um ret�ngulo e informe a sua �rea.
	
	double base, altura, area;
	
	cout << "Informe a largura do ret�ngulo(em m�): ";
	cin >> base;
	cout << endl;
	
	cout << "Informe a altura do ret�ngulo(em m�): ";
	cin >> altura;
	cout << endl;
	
	area = base * altura;
	
	cout << "A �rea de um ret�ngulo de base " << base << " m� e altura " << altura << " m� � " << area << " m�";
	
	return 0;
}
