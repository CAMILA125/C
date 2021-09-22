/*
 O programa deve solicitar o
nome e a idade de um atleta e imprimir os seus dados juntamente com a sua categoria. Utilize a
tabela abaixo para determinar a categoria de cada atleta.
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main (){
	setlocale (LC_ALL,"");
	
	char nome[60];
	int idade;
	
	printf ("Escreva seu nome: ");
	scanf ("%s", &nome);
	printf ("Escreva sua idade: ");
	scanf ("%d", &idade);
	
	switch (idade) {
		
		case 5 ... 10:
			printf ("%s se encaixa na categoria infantil",nome);
			break;
			
		case 11 ... 15:
			printf ("%s se encaixa na categoria juvenil",nome);
			break;
			
		case 16 ... 20:
			printf ("%s se encaixa na categoria junior",nome);
			break;
		
		case 21 ... 25:
			printf ("%s se encaixa na categoria profissional",nome);
			break;
		
		default:
			printf("Não se encaixa ");
	}
	getch();

}
