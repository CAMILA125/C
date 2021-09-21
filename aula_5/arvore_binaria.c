#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

//criar arvore vazia
Arv* arv_criavazia(){
	return NULL;
};
//verifica se a arvore é vazia	
int arv_vazia(Arv* a){
	return a==NULL;
};
// inserir numeros na arvore
Arv* insere(Arv* a, int valor){
	
	if (a==NULL){
		a = (Arv*)malloc(sizeof(Arv));
	
		a->numero = valor;
		a->esq = NULL;
		a->dir = NULL;
		
	}else if(valor < a->numero){
		a->esq = insere(a->esq, valor);
		
	}else if(valor > a->numero){
		a->dir = insere(a->dir, valor);
		
	}
	
	return a;
};
//apresenta se existe ou nao o numero na arvore
void buscar(Arv* a, int valor){
	if(percorre(a,valor)){
		printf("\nelemento %d pertence a arvore\n",valor);}
	else {
		printf("\nelemento %d nao pertence a arvore\n",valor);}
};
//busca na arvore um numero 
int percorre(Arv* a, int valor){
	if(arv_vazia(a)){
		return 0;
	}
	return ((a->numero == valor) || (percorre(a->esq, valor)) || (percorre(a->dir, valor)));
};
//imprime na tela a arvore
void imprime(Arv* a){
	printf("<");
	if(!arv_vazia(a)){
		printf("%d ",a->numero);
		printf("\n n esquerda:");
		imprime(a->esq);
		printf("\n n direita:");
		imprime(a->dir);
		}
	printf(">");
		
};

Arv* remover_arv(Arv* a, int valor){

	if(arv_vazia(a)){
		return NULL;
		
	}else if(a->numero > valor){//se o valor é maior que o numero que eu quero excluir
		a->esq = remover_arv(a->esq, valor);//faz recursividade a esquerda
		
	}else if(a->numero < valor){//se o valor é menor que o numero que eu quero excluir
		a->dir = remover_arv(a->dir, valor);//faz recursividade a direita
		
	}else{
		if(a->esq == NULL && a->dir == NULL){//remove elemento folha
			free(a);
			a = NULL;
		}else
			if(a->esq == NULL){//se tiver um filho na direita
				Arv* aux = a;
				a = a->dir;
				free(aux);
			}else 
				if(a->dir == NULL){//se tiver um filho na esquerda
					Arv* aux = a;
					a = a->esq;
					free(aux);
			}else{
				Arv* aux = a->dir;
				while(aux->esq != NULL){
					aux = aux->esq;
				}
				
				a->numero = aux->numero;//troca as informações
				aux->numero = valor;
				a->dir = remover_arv(a->dir,valor);
			}
	}
	return a;
};
	

