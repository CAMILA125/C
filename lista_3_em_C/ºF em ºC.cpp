/*
Escreva um programa em C que leia uma temperatura
em Fahrenheit e a apresente convertida em graus Celsius. 
Fórmula de conversão: C = (F - 32) * (5 / 9). 
*/

#include <stdio.h>
#include<locale.h>
#include<conio.h>


 main() {
	float C,F;
	
	setlocale(LC_ALL,"");

	printf ("Escreva a emperatura em ºF: ");
	scanf ("%f", &F);
	
	C= ((F-32)*5)/9;
	
	printf ("A temperatura é %f ºC",C);
	
	getch();
}
