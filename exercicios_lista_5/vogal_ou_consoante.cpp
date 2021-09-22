/*
Escreva um programa em C que leia uma letra e indique se ela é uma vogal ou consoante.
Utilize uma estrutura de caso para resolver este problema.
*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main() {
	setlocale(LC_ALL,"");
	
	char letra;
	printf ("\nEscreva uma letra do alfabeto: ");
	scanf ("%s", &letra);
	
	switch (letra) {
		case 'a':
			printf ("vogal");
			break;
		case 'e':
			printf ("vogal");
			break;
		case 'i':
			printf ("vogal");
			break;
		case 'o':
			printf ("vogal");
			break;
		case 'u':
			printf ("vogal");
			break;
		default:
			printf("consoante");
			break;
	}
	return main ();
}
	
