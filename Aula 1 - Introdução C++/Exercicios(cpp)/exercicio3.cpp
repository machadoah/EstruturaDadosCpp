#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	// 3.	Crie um programa que solicite ao usu�rio os lados de um tri�ngulo e informe a sua �rea. 
	
		// ser� utilizado a formula de Heron
		
		// S = 0.5 * (a+b+c) <- semiperimetro
		
		// Area = sqrt(s*(s-a)*(s-b)*(s-c))
	
	double a , b , c , s , area ;
		
	cout << "Ol�, tudo bem? Imagine um tri�ngulo com lados 'a', 'b' e 'c' com seus comprimentos em m�.";
	cout << endl << "Informe a (em m�): ";
	cin >> a;
	
	cout << endl << "Informe b (em m�): ";
	cin >> b;
	
	cout << endl << "Informe c (em m�): ";
	cin >> c;
	
	s = ((a+b+c)/2); // semiperimetro
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout << endl << "A �rea de um tri�ngulo de lados " << a << ", " << b << " e " << c << " possui �rea igual a " << area << ".";
	
	return 0;
}
