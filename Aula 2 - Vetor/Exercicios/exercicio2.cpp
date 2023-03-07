#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin

int main() {
	
	// Define a localiza��o para Portugu�s-Brasil
    setlocale(LC_CTYPE, "portuguese_brazil");
    
    /*
	Fazer um programa que digite v�rios n�meros no vetor de tamanho m�ximo de 100 elementos, 
	at� digitar o n�mero "0". Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. 
	O limite de n�meros � 100.  Sem considerar o "0" como �ltimo n�mero.  
	*/
	
	// IMPORTANTE, ESSE C�DIGO � TODO COMENTADO POIS TEM FIM PEDAG�GICO, UM C�DIGO TODO COMENTADO APARENTE MAIS 'SUJO' POIS O CODIGO DEVE SER CLARO POR SI S�
	// SEM A NECESSIDADE DE DIVERSOS COMENT�RIOS. 
	
	int tamanhoMaximo = 100; // vari�vel respons�vel por garantir o requisito que o programa n�o ultrapasse 100 numeros
	double vetor[tamanhoMaximo]; // vari�vel vetor que a principio possui espa�o para 100 numeros
	int tamanho; // vari�vel destinada ao tamanho do vetor, pois ele pode ter 100 numero, mas nada garante que ele tenha menos que isso, pois ao digitar o 0, alo � seu maximo.
	double ultimoNumero; // o ultimo numero � responsavel por guardar sempre o ultimo numero digitado, para quando for pesquisar e calcular as vezes que ele foi digitado
	int vezesDigitadasUltimoNumero; // guarda a qualtidade de vezes que o ultimo numero foi digitado
	bool leituraAvanca = true; // variavel booleana se o numero � igual a 0 ou o numero de elementos chegou a 100, para encerrar o vetor
	
	// leitura dos numeros
	
	while (tamanho < tamanhoMaximo && leituraAvanca) {
		// Enquanto o tamanho for menor que o tamanho maximo(100) e a leitura possa contuar
		
		double numero;
		
		cout << endl << "Insira o " << tamanho+1 << "� numero: ";
		cin >> numero;
		
		if(numero == 0 || tamanho == tamanhoMaximo) {
		// Se numero digitado pelo usu�rio for igual a 0 ou o tamanho atingido ter atingido o maximo proposto(100)
		
			leituraAvanca = false;
			// a leitura encerra resultando a saida do while
		} else {
		  // sendo o numero diferente de 0 e o tamanho diferente do tamanho final proposto
		  
			vetor[tamanho] = numero; // vetor ira armazenar no indice presente o valor inserido pelo usu�rio
			ultimoNumero = numero; // o valor inserido pelo usu�rio ser� guardado dentro da vari�vel ultimo numero
			tamanho++; // tamanho, ou seja, o indice o vetor ira ser incrementado
		}
	}
	
	// Contagem dos numeros iguais
	
	for(int index = 0; index < tamanho; index++) {
	// para o indice 0 at� o ultimo digito digitado
		if (vetor[index] == ultimoNumero) {
		// se o indice tiver o valor igual ao ultimo digito
		
			vezesDigitadasUltimoNumero++;
			// somar 1 as vezes que o ultimo numero foi digitado
		}
	}
	
	// Finish
	
	cout << endl << "O ultimo numero digitado foi " << ultimoNumero << " e ao todos ele foi digitado " << vezesDigitadasUltimoNumero << " vezes.";
	
	
	
	return 0;
}
