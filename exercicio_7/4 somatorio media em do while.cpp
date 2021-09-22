#include<stdio.h>

main(){
	int soma=0, i=0, x,media;
	do {
		printf("digite um numero: ");
		scanf ("%d",&x);
		
		soma=x+soma;
		
		i++;
		media=soma/i; 
		
	}while(x <= 0);
	printf ("a soma dos numeros e:%d \na media e:%d \no total de valores lidos e: %d",soma,media,i);
}
