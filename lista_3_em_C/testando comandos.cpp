/*
Escreva um programa em C que apresente os caracteres “,
 / e \. Teste os comandos \r, \t e \n. 
 */
 
 #include<stdio.h>
 #include<conio.h>
 #include<locale.h>
main () {
	setlocale (LC_ALL,"");
	
	char frase;
	printf ("\"  \\  \/   ");
	printf ("\nSe não existe vida fora da Terra,\nentão o universo é um grande desperdício de \te\ts\tp\ta\tç\to.\nCarl\rSagan");
	

	getch();
}
