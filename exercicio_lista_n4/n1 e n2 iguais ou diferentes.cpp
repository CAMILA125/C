/*Fa�a um programa em C que leia dois n�meros reais e indique 
se s�o iguais ou diferentes. Mostre o Maior e o menor respectivamente.
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h> 

 main(){
	setlocale (LC_ALL, "");
	
	int n1=0;
	int n2=0;
	
	printf ("Insira dois n� separados por v�rgula: ");
	scanf ("%d,%d", &n1,&n2);
	
	
	if (n1!=n2){
		printf ("S�o diferentes\n");
		if (n1>n2){
			printf ("%d ,%d",n1, n2);
		}
		else {
			printf ("%d , %d",n2, n1);
		}
	}
	else {
		printf ("S�o iguais");
	}
}
