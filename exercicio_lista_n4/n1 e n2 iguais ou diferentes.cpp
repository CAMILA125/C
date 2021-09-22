/*Faça um programa em C que leia dois números reais e indique 
se são iguais ou diferentes. Mostre o Maior e o menor respectivamente.
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h> 

 main(){
	setlocale (LC_ALL, "");
	
	int n1=0;
	int n2=0;
	
	printf ("Insira dois nº separados por vírgula: ");
	scanf ("%d,%d", &n1,&n2);
	
	
	if (n1!=n2){
		printf ("São diferentes\n");
		if (n1>n2){
			printf ("%d ,%d",n1, n2);
		}
		else {
			printf ("%d , %d",n2, n1);
		}
	}
	else {
		printf ("São iguais");
	}
}
