/*
Escreva um programa em C que receba um n�mero inteiro e 
imprima na tela �F1�, �F2� ou �F3�, conforme as condi��es abaixo
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main (){
	int x;
	setlocale(LC_ALL,"");
	
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	
	if (x<=10){
		printf("F1");
	} 
	else if (10<x && x<=100){
		printf("F2");
	}
	else{
		printf("F3");
	}
	
	getch();
}


