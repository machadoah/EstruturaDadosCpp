#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*

1.	Desenvolva um programa que tenha dois m�todos fahrenheit e celcius, onde voc� entra com um valor em fahrenheit e transforma em celcius e vice e versa.

	Formula Celsius:	Celcius = (fahrenheit - 32) * 5/9
	
	Formula Fahrenheit:	Fahrenheit = (Celsius * 9/5) + 32
	
*/

// CHAMADA DO M�TODOS
double celsius(double temperatura_fahrenheit);

double fahrenheit(double temperatura_celsius);


// M�TODO MAIN
int main(){
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
	
	int id;
	
	cout << "Ol�, voc� deseja converter Celsius para Fahrenheit [digite 1] ou Fahrenheit para Celcius [digite 2]? ";
	
	cin >> id;
	
	switch(id){
		
		case 1:
			
			double temperatura_celsius;
			
			cout << endl << "Insira um valor que ser� convertido de Celsius para Fahrenheit: ";
			cin >> temperatura_celsius;
			
			cout << endl << "A temperatura de " << temperatura_celsius << "�C corresponde a " << fahrenheit(temperatura_celsius) << "�F";
			
			break;
			
		case 2:
			
			double temperatura_fahrenheit;
			
			cout << endl << "Insira um valor que ser� convertido de Fahrenheit para Celsius: ";
			cin >> temperatura_fahrenheit;
			
			cout << endl << "A temperatura de " << temperatura_fahrenheit << "�F corresponde a " << celsius(temperatura_fahrenheit) << "�C";
			
			break;
		
		default:
			
			cout << endl << "Valor digitado incorreto";
		
	}
	
	
	return 0;
}

// M�TODO FAHRENHEIT
	
double fahrenheit(double temperatura_celsius) {
	
	// Formula Fahrenheit:	Fahrenheit = (Celsius * 9/5) + 32
	
	double temperatura_fahrenheit = (temperatura_celsius * (9.0/5.0)) + 32;
	
	return temperatura_fahrenheit;
	
}


// M�TODO CELSIUS

double celsius(double temperatura_fahrenheit) {
	
	// Formula Celsius:	Celcius = (fahrenheit - 32) * 5/9
	
	double temperatura_celsius = (temperatura_fahrenheit - 32) * (5.0/9.0);
	
	return temperatura_celsius;
	
}



