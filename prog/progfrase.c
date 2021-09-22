#include <stdio.h>
#include "frase.h"
int main(int argc, char **argv){
char  letra;
Pilha* frase = criaPilha();
int pos;
	printf("digite uma frase.\n Regras: O caractere # desfaz a última ação feita. \nO caractere @ apaga todo o conteúdo.\n\n");
	
	do {
		letra = getchar();
		empilha(frase,letra);
		if(letra == '@'){
			liberaPilha(frase);
		}
		if(letra == '#'){
			
			desempilha(frase, &pos );
		}
		//nesse ponto você pode tratar a variável letra
	} while (letra != '\n');
	
	mostrarOVetorDaPilha(frase);
	printf("\n\n");
	return 0;
}
