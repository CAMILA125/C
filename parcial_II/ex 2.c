/*2) Escreva um programa que receba um número inteiro e calcule seu fatorial e 
mostre o resultado. O programa deve mostrar uma mensagem de erro caso seja informado 
um número negativo. Tratar o fatorial de zero (0! = 1).*/
#include<stdio.h>

main(){
	
	int x=0,fat=0,i=1 ;
	
	do {
	
	printf("\ndigite um numero: ");
	scanf ("%d",&x);
	
		if (x== 0)
				fat = 1;
			else {
				fat = 1;
				for (i = 1; i <= x; i++){
					fat = fat * i;
				}
					printf ("%d",fat);
			}
		
	


	
	}while(x>0);
	
	printf ("\nnao é um numero positivo");
}
