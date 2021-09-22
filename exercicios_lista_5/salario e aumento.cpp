/*
Crie um programa em C que receba o valor do sal�rio e calcule o aumento salarial conforme as
regras abaixo:
a. Se sal�rio < R$ 1.500,00: aumento de 15%
b. Se R$ 1.500,00 <= sal�rio < R$ 1.750,00: aumento de 12%
c. Se R$ 1.750,00 <= sal�rio < R$ 2.000,00: aumento de 10%
d. Se R$ 2.000,00 <= sal�rio < R$ 3.000,00: aumento de 7%
e. Se sal�rio > R$ 3.000,00: aumento de 5%
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>

main() {
	setlocale(LC_ALL,"");
	
	float salario;
	
	printf ("Insira o sal�rio: ");
	scanf ("%f", &salario);
	
	if (salario<1500) {
		salario= salario*1.15;
		printf ("Seu sal�rio � : %.2f",salario);
	}
	else if (salario>=1500 && salario<1750) {
		salario= salario*1.12;
		printf ("Seu sal�rio � : %.2f",salario);
	}
	else if (salario>=1750 && salario<2000) {
		salario= salario*1.10;
		printf ("Seu sal�rio � : %.2f",salario);
	}
	else if (salario>=2000 && salario<3000) {
		salario= salario*1.07;
		printf ("Seu sal�rio � : %.2f",salario);
	}
	else {
		salario= salario*1.05;
		printf ("Seu sal�rio � : %.2f",salario);
	}
	
	getch();
	
}

