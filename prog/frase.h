#define MAX 1000

typedef struct {
	int topo;
	int vetor[MAX];
} Pilha;

Pilha* criaPilha();

void liberaPilha(Pilha* p);

int estahCheia(Pilha* p);
int estahVazia(Pilha* p);

int empilha(Pilha* p, char v);
int desempilha(Pilha* p, int* v);

int topo(Pilha* p);

void mostrarOVetorDaPilha(Pilha* p);


