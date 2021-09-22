#include <stdlib.h>
#include <stdio.h>
#include "frase.h"

Pilha* criaPilha() {
	
	Pilha* p;
	
	p = malloc( sizeof(Pilha) );
	
	p->topo = 0; //(*p).topo
	
	return p;
}

void liberaPilha(Pilha* p) {
	p->topo=0;
}

int estahCheia(Pilha* p) {
	if (p->topo == MAX)
	   return 1;
	else
	   return 0;
}

int estahVazia(Pilha* p) {
	
	if ( p->topo == 0)
	   return 1;
	else
	   return 0;
}

int empilha(Pilha* p, char v) {
	if ( estahCheia(p) ) 
	    return 0; //não foi possível empilhar (pilha cheia)
	else {
		p->vetor[p->topo] = v;
		p->topo++;
		return 1; //empilhamento concluído com sucesso!!
	}	
}

int desempilha(Pilha* p, int* v) {
	
	if ( estahVazia(p) )
	   return 0; //não foi possível desempilhar
	else {
	   p->topo--;
	   p->topo--;
	   *v = p->vetor[p->topo];
	   return 1; //deu certo	
	}
}

int topo(Pilha* p) {
	
	return p->vetor[p->topo];
	
}

void mostrarOVetorDaPilha(Pilha* p) {
	
	int i;
	
	printf("\n\n");
	
	for (i=0; i<=(p->topo-1); i++){
	    printf("%c", p->vetor[i]);
	}
}






