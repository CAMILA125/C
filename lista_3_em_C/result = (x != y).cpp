/*
Escreva um programa que receba duas vari�veis 
(x e y) do tipo float. O programa deve conter uma vari�vel 
(result) do tipo int para receber um valor booleano que
 deve ser apresentada no final da execu��o. 
 Utilize a express�o result = (x != y) e observe a sa�da 
 do programa. 
 */
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	float x,y;
	int result;
	
	setlocale(LC_ALL,"");

	printf ("Insira o primeiro n�: ");
	scanf ("%f", &x);
	printf ("Insira o segundo n�: ");
	scanf ("%f", &y);
	
	result=(x!=y);
	printf ("%d",result);
	
	getch();
	
	
}














