/*ÁRVORE BINÁRIA DE BUSCA exercício 1*/

#include <stdio.h>
#include <stdlib.h>

struct arv{
  int num;
  struct arv* esq;
  struct arv* dir;
};

typedef struct arv Arv;

/* Função que cria uma árvore vazia */
Arv* arv_criavazia(void){
  return NULL;
};

/* Função que verifica se uma árvore é vazia */
int rv_vazia(Arv* a){
  return a==NULL;
};

/* inserir elementos */
Arv* insere(Arv* a, int valor){

  if (a==NULL){

      a = (Arv*)malloc(sizeof(Arv));
      a->num = valor;
      a->esq = NULL;
      a->dir = NULL;

  }else if (valor < a->num){

    a->esq = insere(a->esq,valor);

  }else if(valor > a->num){

    a->dir = insere(a->dir,valor);
  }

  return a;
};

/*Buscando elementos*/
int busca(Arv* a, int valor){
  if (arv_vazia(a)){
    return 0;
  }

  return a->num==valor || busca(a->esq, valor) || busca(a->dir, valor);
};

/*Removendo elementos*/
Arv* remover(Arv* a, int valor){
      if (arv_vazia(a)){
          return NULL;

      }else if(a->num > valor){

          a->esq = remover(a->esq, valor);

      }else if(a->num < valor){

        a->dir = remover(a->dir, valor);
      }else{
        if(a->esq == NULL && a->dir == NULL){
          free (a);
          a = NULL;
        }
        else
            if(a->esq == NULL){

              Arv* aux = a;
              a = a->dir;
              free (aux);
            }
            else
            if(a->dir == NULL){

              Arv* aux = a;
              a = a->esq;
              free (aux);
            }
            else
            {

              Arv* aux = a->dir;
              while (aux->esq != NULL) {
                    aux = aux->esq;
              }
              a->num = aux->num;
              aux->num = valor;
              a->dir = remover(a->dir, valor);
            }
      }
return a;
};
