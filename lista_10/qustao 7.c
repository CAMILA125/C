#include<stdio.h>

void procedimento(int x, int pos, int *z);
main(){
	int vet[10],x, pos;
	int *point, i;
	
	for(i=0;i<10;i++){
		printf("\ndigite um numero");
		scanf("%d", &vet[i]);
		
	}
	
	
	point=&vet[0];
	
	
	printf ("\n - - - - - - - - ");
	printf ("\nVetor original \n ");
	for(i=0;i<10;i++){
		printf("%d ", vet[i]);
		
	}
	
	printf ("\nInforme um valor: ");
	scanf ("%d", &x);
	
	printf ("\nInforme uma posicao no vetor (de 0 a 9):  ");
	scanf ("%d", &pos);
	procedimento(x,pos,point);
	
	printf ("\nVetor com valor trocado \n ");
	for(i=0;i<10;i++){
		printf("%d ", vet[i]);
		
	}
	
	
}

void procedimento(int x, int pos, int *z){
	int i = 0;
	while (i != pos){
		z = z + 1;
		i++;
	}
	*z = x;
}
