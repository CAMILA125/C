#include<stdio.h>

main(){
	int soma=0, i=0, x;
	float media;
	printf ("digite um numero: ");
	do {
	
		fflush (stdin);
		scanf ("%d",&x);
		
		soma=x+soma;
		
		i++;
		media=soma/i; 
		printf("digite outro numero: ");	
	}while(x > 0);

	printf ("a soma dos numeros e:%d \na media e:%.4f \no total de valores lidos e: %d",soma,media,i);
}
