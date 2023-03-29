#include <cstdlib> 
#include <iostream>
#include <math.h> // uso das fun��es matem�ticas

// include representa os imports

using namespace std; // cout e cin


/*
1. Crie um m�todo do tipo boleano para verificar se um n�mero � positivo e par, 
	crie outro m�todo que entre com n�meros enquanto forem positivos e pares 
	(para isso chame o m�todo j� criado) e ao final retorne quantos n�meros foram digitados
*/

bool par_positivo(int number){
	
	if((number > 0)&&(number % 2 == 0)){
		return true;
	}
		return false;
}

int verifica() {
	
	int vezes, cont=0;
	int verificacao;
	do{
		cout << "Insira um numero";
		cin >> verificacao;
		vezes++;
	}
	while(par_positivo(verificacao));
	return vezes-1;
}
int main(int argc, char** argv) {	
	int vezes;
	cout << verifica();
	return 0;
}
