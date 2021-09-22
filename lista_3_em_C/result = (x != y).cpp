/*
Escreva um programa que receba duas variáveis 
(x e y) do tipo float. O programa deve conter uma variável 
(result) do tipo int para receber um valor booleano que
 deve ser apresentada no final da execução. 
 Utilize a expressão result = (x != y) e observe a saída 
 do programa. 
 */
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	float x,y;
	int result;
	
	setlocale(LC_ALL,"");

	printf ("Insira o primeiro nº: ");
	scanf ("%f", &x);
	printf ("Insira o segundo nº: ");
	scanf ("%f", &y);
	
	result=(x!=y);
	printf ("%d",result);
	
	getch();
	
	
}














