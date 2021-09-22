#include <stdio.h>
#include "fila.h"

void somar(int* a) {
	*a = *a + 10;
}

int main(int argc, char **argv)
{	
	Fila* ru;
	
	ru = criaFila();
	
	int k;
	
	for (k=1;k<=10;k++) {
		
		if ( inserir(ru, k) == 0)
		    printf("\nNão foi possível inserir %d", k);
	}
	
	printf("\nConteúdo da fila\n");	
	mostrarFila(ru);
		 
	int r;
	
	while ( ! estahVazia(ru) ) {	
	    retirar(ru, &r);
		printf("\nValor retirado: %d",r); 
	}
	
	printf("\nConteúdo da fila\n");	
	mostrarFila(ru);
	
	for (k=10;k<=30;k++) {
		if ( inserir(ru, k) == 0)
		    printf("\nNão foi possível inserir %d", k);
	}
	
	printf("\nConteúdo da fila\n");	
	mostrarFila(ru);
	
	
	liberaFila(ru);

	
	return 0;
}

