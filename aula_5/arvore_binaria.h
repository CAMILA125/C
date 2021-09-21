
 
typedef struct {//esttutura com as informações
	int numero;
	struct Arv* esq;
	struct Arv* dir;
}Arv;

Arv* arv_criavazia();

int arv_vazia(Arv* a);

Arv* insere(Arv* a, int valor);

void imprime(Arv* a);
	
int percorre(Arv* a, int valor);

void buscar(Arv* a, int valor);

Arv* remover_arv(Arv* a, int valor);

