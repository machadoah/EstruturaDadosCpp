#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 9.	Escreva um programa que solicite ao usu�rio quatro n�meros e mostre na tela o maior, o menor e a m�dia aritm�tica dos n�meros
	
	double a, b, c, d, ma;
	
	cout << "Informe 4 numeros, lhe informarei o maior o menor a MA (m�dia arirm�tica).";
	
	cout << endl << "Informe o 1� numero: ";
	cin >> a;
	
	cout << endl << "Informe o 2� numero: ";
	cin >> b;
	
	cout << endl << "Informe o 3� numero: ";
	cin >> c;
	
	cout << endl << "Informe o 4� numero: ";
	cin >> d;
	
	cout << "portanto os numeros s�o " << a << ", " << b << ", " << c << ", "<< d;
	
	cout << endl;
	
	//MAIOR
	
	if(a >= b && a >= c && a >= d) {
		cout << a << " � o maior";
		
	} else if(b >= a && b >= c && b >= d ) {
		cout << b << " � o maior";
		
	} else if(c >= a && c >= b && c >= d ) {
		cout << c << " � o maior";
		
	} else if(d >= a && d >= b && d >= c) {
		cout << d << " � o maior";
	};
	
	cout << endl;
	
	// MENOR
	
	if(a <= b && a <= c && a <= d) {
		cout << a << " � o menor";
		
	} else if(b <= a && b <= c && b <= d ) {
		cout << b << " � o menor";
		
	} else if(c <= a && c <= b && c <= d ) {
		cout << c << " � o menor";
		
	} else if(d <= a && d <= b && d <= c) {
		cout << d << " � o menor";
	};
	
	cout << endl;
	
	// MA
	
	ma = (a + b + c + d)/a;
	
	cout << "A m�dia aritm�tica � " << ma;
	
	return 0;
}
