/*
Escreva um programa em C que apresente os caracteres �,
 / e \. Teste os comandos \r, \t e \n. 
 */
 
 #include<stdio.h>
 #include<conio.h>
 #include<locale.h>
main () {
	setlocale (LC_ALL,"");
	
	char frase;
	printf ("\"  \\  \/   ");
	printf ("\nSe n�o existe vida fora da Terra,\nent�o o universo � um grande desperd�cio de \te\ts\tp\ta\t�\to.\nCarl\rSagan");
	

	getch();
}
