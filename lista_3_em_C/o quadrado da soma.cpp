/*
Fa�a um programa que leia dois valores inteiros e apresente 
o resultado do quadrado da soma dos valores lidos. Dica: pesquise sobre a fun��o pow(). 
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main() {
	int n1,n2,result;
	
	setlocale(LC_ALL,"");
	
	printf ("Insira o primeiro n�: ");
	scanf ("%d", &n1);
	printf ("Insira o seundo n�: ");
	scanf ("%d", &n2);
	
	result= pow(n1+n2,2);
	
	printf ("O quadrado da soma de %d e %d �: %d",n1,n2,result);
	
	getch();
	
}
