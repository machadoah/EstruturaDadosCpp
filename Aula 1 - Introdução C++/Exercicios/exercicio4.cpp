#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 4.	Crie um programa que solicite ao usu�rio os lados de um trap�zio e informe a sua �rea.
	
	double A, B, b, h;
	
		// A = (((B + b) * h)/2)
		
	cout << "Ol� tudo bem? imagine um trap�zio, ele possui bases paralelas na horizontal e s�o separadas por uma dado comprimento que � a altura do trap�zio. ";
	cout << endl << "Forne�a o valor da base inferior do trap�zio(em m�): ";
	cin >> B;
	
	cout << endl<< "Forne�a o valor da base superior do trap�zio(em m�): ";
	cin >> b;
	
	cout << endl << "Forne�a o valor da altura do trap�zio(em m�): ";
	cin >> h;
	
	A = (((B + b) * h)/2);
	
	cout << endl << "A �rea do trap�zio � " << A;
	
	return 0;
}
