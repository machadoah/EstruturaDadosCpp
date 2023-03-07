#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Criar um programa que crie um vetor com 10 posi��es e carregue com uma palavra, depois imprima o vetor de uma maneira que exiba a palavra ao contr�rio (ex. casa...asac) 
	*/
	
	char vetor[10];
	int tamanhoMaximo = 10;
	int tamanho;
	
	
	cout << endl << "Inisira a quantidade de letras da palavra: ";
	cin >> tamanho;
	
	if(tamanho > tamanhoMaximo ) {
		
		cout << "\nDeve ser uma palavra com menos de " << tamanhoMaximo <<" letras.";
	} else {
		
		for(int index = 0; index < tamanho; index ++) {
			
			if(index == tamanho-1) {
				cout << endl << "Digite a ultima letra da palavra:";
				cin >> vetor[index];
			} else {
			
			cout << endl << "Digite a " << index+1 << "� letra da palavra:";
			cin >> vetor[index];
		}
		}
		
		cout << endl;
		
		for(int index = tamanho-1; index >= 0; index--){
			
			cout << vetor[index];
		}
		
	}
	
	return 0;
}
