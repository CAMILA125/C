/*
Escreva um programa que leia dois valores inteiros e apresente 
o resultado da soma dos quadrados dos valores lidos. 
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
	
	result= pow(n1,2)+pow(n2,2);
	
	printf ("A soma dos quadrados de %d e %d �: %d",n1,n2,result);
	
	getch();
	
}
