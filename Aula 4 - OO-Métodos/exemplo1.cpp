#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

// CHAMADA DO M�TODOS
double soma(int primeiro_numero, int segundo_numero);


// M�TODO MAIN
int main(){
	
	int minha_idade, irmao_idade;
	
	cout << endl << "Insira sua idade: ";
	cin >> minha_idade;
	
	cout << endl << "Insira a idade do seu irm�o: ";
	cin >> irmao_idade;
	
	cout << endl << "A idade do seu irm�o somada com a sua �: " << soma(minha_idade,irmao_idade);
	
	
	return 0;
}


// M�TODO SOMA
double soma(int primeiro_numero, int segundo_numero){
	
	double resultado = primeiro_numero + segundo_numero;
	
	return resultado;
	
}
