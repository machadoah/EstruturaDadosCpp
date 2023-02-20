#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 8.	Crie um programa que solicite ao usu�rio os tr�s �ngulos de um tri�ngulo e informe se este � um tri�ngulo:  
			// equil�tero;	
			// is�sceles;
			// escaleno.
			
	double a, b, c;
	
	cout << "Me informe os angulos de um triangulo e lhe informarei se le � equilatero ou isosceles ou escaleno";
	
	cout << endl << "Equilatero, tringulo que possui os tr�s angulos iguais.";
	cout << endl << "Is�sceles, tringulo que possui pelo menos dois angulos iguais (note ent�o que o equilatero � um caso especial de isosceles!!).";
	cout << endl << "Escaleno, tringulo que os tr�s angulos diferentes.";
	
	cout << endl << "Informe o angulo 'a' do triangulo: ";
	cin >> a;
	
	cout << endl << "Informe o angulo 'b' do triangulo: ";
	cin >> b;
	
	cout << endl << "Informe o angulo 'c' do triangulo: ";
	cin >> c;
	
	if ((a + b + c) != 180) {
		cout << endl << "Os angulos n�o formam um tri�ngulo, pois sua somat�rio deve ser igual a 180�.";
	} else if(a == b && b == c) {
		cout << endl << "O trinagulo tem obviamente os tr�s angulos iguais a 60�, portanto � isosceles pois pelo menos dois deles s�o iguais, e equilatero pois os tr�s s�o iguais.";
	} else if (a == b || a == c || b == c){
		cout << "O triangulo � isosceles, pois dois angulos s�o iguais.";
	} else {
		cout << endl << "O triangulo � escaleno, todos seus angulos s�o diferentes.";
	};
	
	return 0;
}
