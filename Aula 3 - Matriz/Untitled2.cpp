#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;


int main(){
	
	/*
	EXERCICIO 2)
	
	Ler valores inteiros para a matriz A[3][5]. 
	Gerar e imprimir o vetor Soma_Linha, onde cada elemento � a soma dos elementos de uma linha da matriz A. 
	Fa�a o trecho que gera a matriz separadamente da entrada e sa�da. 
	*/
	
	int A[3][5];
	int somaLinha[3];
	int total = 0;
	
	//POPULA��O DA MATRIZ
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++ ){
			cout << "Ol�, insira o elemento " << i << "x" << j << ": ";
			cin >> A[i][j];
		}
	}
	
	// IMPRESS�O DA MATRIZ
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++ ){
			
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	
	// VETOR
	for(int i = 0; i < 3; i++){
		
		total = 0;
		somaLinha[i] = 0;
		
		for(int j = 0; j < 5; j++ ){
			
			total = A[i][j];
			
			somaLinha[i] = somaLinha[i] + total; 	
		}
	}
	
	// IMPRESS�O DO VETOR
	for(int i = 0; i < 3; i++){
		cout << "Soma da " << i+1 << "� linha: "  << somaLinha[i] << endl;
		
	}
	
	return 0;
}
