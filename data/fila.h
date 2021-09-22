#define MAX 10

typedef struct {
	int comeco;
	int final;
	int tamanho;
	int vetor[MAX];	
} Fila;

Fila* criaFila();

void liberaFila(Fila* f);

int estahVazia(Fila* f);

int estahCheia(Fila* f);

int inserir(Fila* f, int v);

int retirar(Fila* f, int* v);

void mostrarFila(Fila* f);
