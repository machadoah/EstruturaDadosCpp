#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports
    /*
	5-) Criar um m�todo que receba como par�metro dois vetores, e 
		um inteiro indicando a quantidade de elementos que os dois vetores t�m.  
		O m�todo dever� retornar a soma  dos dois vetores.
	
	*/  
using namespace std; // cout e cin

int somaVetor(int vetor1[],int vetor2[], int tamanho){
	int soma = 0;
	for(int i = 0; int < tamanho; i++){
		soma += vetor1[] + vetor2[];
	}	
	return soma;
		
}

int main() {
	int vetor1[5]{1,2,5,6,7};
	int vetor2[5]{3,4,8,9,10};
	int tamanho = 5;
	
	int resultado  = somarVetores(vetor1, vetor2, tamanho);
	cout << resultado;
	
	
	return 0;
}
