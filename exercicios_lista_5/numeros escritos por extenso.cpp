/*
Escreva um programa que leia um número inteiro entre 1 e 10 e mostre-o escrito por extenso.
Caso seja inserido um número fora deste intervalo, o programa deve apresentar a mensagem
“Número inválido”
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main() {
	setlocale(LC_ALL,"");
	
	int n;
	
	printf ("Digite um númerp entre 1 e 10\n");
	scanf ("%d", &n);
	
	switch (n){
		case 1:
			printf("UM");
			break;
	
		case 2:
			printf("DOIS");
			break;
		
		case 3:
			printf("TRÊS");
			break;
		
		case 4:
			printf("QUATRO");
			break;
		
		case 5:
			printf("CINCO");
			break;
		
		case 6:
			printf("SEIS");
			break;
		
		case 7:
			printf("SETE");
			break;
		
		case 8:
			printf("OITO");
			break;
		
		case 9:
			printf("NOVE");
			break;
			
		case 10:
			printf("DEZ");
			break;
			
		default:
			printf("Nº inválido");
	}
	getch();
}
