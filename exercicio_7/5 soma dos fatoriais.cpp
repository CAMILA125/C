#include<stdio.h>

main(){
	int soma=0, numero=0,i,i2;
	for (i=1; i<=15;i++){
		printf ("digite um numero para fazer seu fatorial: ");
		
		scanf ("%d", &numero);
		
		for (i2=1; i2<numero; i2++){
			numero=numero*i2;
		}
		soma= numero+soma;
		numero=1;
	}
	printf("a soma dos fatoriais é %d",soma);
}
