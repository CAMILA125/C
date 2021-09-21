#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main(int argc, char **argv){
	Arv* a = arv_criavazia();
	a = insere(a, 28);	
	a = insere(a, 15);
	a = insere(a, 50);
	a = insere(a, 16);
	a = insere(a, 30);
	a = insere(a, 60);
	a = insere(a, 96);
	
	imprime(a);// imprime arvere após inserir
	
	buscar(a,15);
	buscar(a,30);
	
	printf("\n\n\n");
	
	a = remover_arv(a,30);
	a = remover_arv(a,15);
	a = remover_arv(a,28);
	
	imprime(a);// imprime arvore apos excluir
	

	return 0;
	}
