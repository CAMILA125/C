//Faça um programa que leia 3 números inteiros e os imprima em ordem crescente. 
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main (){
	setlocale(LC_ALL,"");
	
	int a,b,c,aux;
	
	printf ("Escreva tres números separaos por vírgulas: ");
	scanf ("%d,%d,%d", &a,&b,&c);
	
	if (a>b){
		aux=a;
		a=b;
		b=aux;
	}
	if (b>c){
		aux=b;
		b=c;
		c=aux;
	}
	if (a>c){
		aux=a;	
		a=c;
		c=aux;
	}
	if (a>b){
		aux=a;
		a=b;
		b=aux;
	}
	printf ("%d < %d < %d", a,b,c);

	getch();	
}
