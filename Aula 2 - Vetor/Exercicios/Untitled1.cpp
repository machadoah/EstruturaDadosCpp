#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Criar um vetor com a 8 elementos e orden�-los.
	*/
	
	int tamanho = 8;
	int v[tamanho];
	
	//Leitura do vetor
	for(int i = 0; i < tamanho; i++) {
		cout << "Insira o " << i+1 << "� elemento:";
		cin >> v[i];
	}
	
	//Ordena��o do vetor
//	for(int i = 0; i < tamanho)
	
    
	
	
	return 0;
}
