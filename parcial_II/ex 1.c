/* 
Autor: camila munzlinger     
01) Faça um programa que leia um número inteiro N menor que 26. O programa deve apresentar todos os números de 1 até 100,
substituindo os múltiplos do número informado pela palavra “pi”.   */ 
#include<stdio.h>

main(){
	
	int x=0,i=0;

	printf ("digite um numero: ");
	scanf ("%d", &x);
	
	for(i=1;i<=100;i++){
	
		if (i%x==0) {
		printf ("\npi");
		}
		else {
		printf ("\n%d", i);	
		
		}

	}

}
