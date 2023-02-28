#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Exercicio 1)
	
	Fazer um programa que leia v�rios n�meros inteiros e positivos. 
	A leitura se encerra quando encontrar um n�mero negativo ou quando o vetor ficar completo. 
	Sabe-se que o vetor possui, no m�ximo, 10 elementos. 
	Gerar e imprimir um vetor onde cada elemento � o inverso do correspondente do vetor original.
	
	*/
	
	int tamanhoMaximo = 10;
	int vetor[tamanhoMaximo];
	int tamanho = 0;
	
	
	
	while(tamanho < tamanhoMaximo) {
		
		int numero;
		
		cout << "Insira um numero: ";
		cin >> numero;
		
		if(numero < 0){
			break;
		}
		
		vetor[tamanho] = numero;
		tamanho++;
	}
	
	cout << "Vetor padr�o: " << endl;
	
	for (int i = 0; i < tamanho; i++){
		cout << vetor[i] << endl;
	}
	
	cout << "Vetor inverso: " << endl;
	
	for(int i = 0; i < tamanho; i++) {
		cout << (pow(vetor[i], -1));
		cout << endl;
	}
	
	
	return 0;
}
