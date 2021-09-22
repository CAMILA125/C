/*
Escreva um programa que receba dois números reais e mostre
na tela o divisor, o dividendo, o quociente e o resto da divisão.
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main() {
	float n1,n2;
	int quociente, resto;
	
	setlocale(LC_ALL,"");
	
	printf ("Insira o primeiro nº: ");
	scanf ("%f", &n1);
	printf ("Insira o seundo nº: ");
	scanf ("%f", &n2);
	
	quociente=n1/n2;
	resto=fmod(n1,n2);
	
	printf ("O dividendo: %f \nO divisor: %f \nO quociente: %d \nO resto: %d",n1,n2,quociente,resto);
	
	getch();
}
