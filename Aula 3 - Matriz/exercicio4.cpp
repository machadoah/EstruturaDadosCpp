#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
	
	/*
	EXERCICIO 4)
	
	Criar uma matriz de ordem 5 e imprima: toda a matriz 
	e depois os n�meros que se encontram em posi��es cuja a 
	linha mais a coluna formam um n�mero �mpar.
	*/
	
	int A[5][5];
	//int vetor[12];
	int soma = 0;
	
	for(int i = 0; i < 5; i++) {
		
		for(int j = 0; j < 5; j++) {
			
			cout << endl << "Insira o elemento " << i << " x " << j << ": ";
			cin >> A[i][j];
		}
	}
	
	for(int i = 0; i < 5; i++) {
		
		for(int j = 0; j < 5; j++) {
			
			if((i + j) % 2 != 0) {
				
				soma = soma + A[i][j];
				
			}
		}
	}
	
	cout << "A soma dos elementos que a soma de seus indices s�o pares �: "<< soma;
			
	return 0;
}
