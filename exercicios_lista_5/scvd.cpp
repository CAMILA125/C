/*
Faça um programa que leia uma letra que represente o estado civil de uma pessoa e mostre uma
mensagem com a sua descrição (Solteiro(a), Casado(a), Viúvo(a), Divorciado(a)). O programa
deve apresentar uma mensagem de adequada caso uma letra diferente seja informada. 
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main() {
	setlocale(LC_ALL,"");
	
	char estado_civil ;
	
	printf("Escreva uma das seguintes letras (s, c, v, d)\n");
	scanf ("%s", &estado_civil);
	
	switch (estado_civil) {
		
		case 's':
			printf ("SOLTEIRO(A)");
			break;
			
		case 'c':
			printf ("CASADO(A)");
			break;
			
		case 'v':
			printf ("VIUVO(A)");
			break;
			
		case 'd':
			printf ("DIVORCIADO(A)");
			break;
			
		default:
			printf ("caracter inválido");
			break;
			
	}
}
