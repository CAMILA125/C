#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila* criaFila() {
	Fila* temp;
	
	temp = malloc( sizeof( Fila) );
	
	temp->comeco = 0;
	temp->final = 0;
	temp->tamanho = 0;
	
	return temp; 
}

void liberaFila(Fila* f) {
	free(f);	
}

int estahVazia(Fila* f) {
	if ( f->tamanho == 0)
	   return 1;
	else
	   return 0;
}

int estahCheia(Fila* f) {
	if ( f->tamanho == MAX )
	    return 1;
	else
	    return 0;
}

int inserir(Fila* f, int v) {
	
	if ( estahCheia(f) == 1 )
	    return 0; //não foi possível inserir ... Fila Cheia
	else {
		
		if ( f->final == MAX )
		    f->final = 0;
		    
		f->vetor[f->final] = v; 
		
		f->final++;
		f->tamanho++;
		
		return 1;	
	}
}

int retirar(Fila* f, int* v) {
	
	if ( estahVazia(f) == 1 )
	    return 0;
	else {
		*v = f->vetor[f->comeco];
		
		f->comeco++;
		
		if ( f->comeco == MAX )
		   f->comeco = 0;
		   
		f->tamanho--;
		
		return 1;
    }	
}

void mostrarFila(Fila* f) {
	
	int i, cont;
	
	cont = 0;
	i = f->comeco;
	
	while (cont < f->tamanho) {
		printf("%d ", f->vetor[i]);
		i++;
		
		if (i == MAX)
		    i = 0;
		cont++;
	}
}






