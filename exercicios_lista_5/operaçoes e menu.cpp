/*
Crie um programa que contenha uma estrutura de caso para apresentar um menu com as op��es
descritas abaixo. O programa deve receber um n�mero real e apresentar o resultado da opera��o
no final da execu��o.
a. Raiz quadrada
b. Metade do valor
c. 10% do valor
d. Dobro do valor
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
 
main (){
	setlocale(LC_ALL,"");
	char menu;
	float n1;
	
	printf ("a. Raiz quadrada\nb. Metade do valor\nc. 10%% do valor\nd. Dobro do valor\n");
	printf ("\nDigite a op��o: ");
	scanf ("%s", &menu);
	printf ("Digite o numero que desejas aplicar a opera��o:");
	scanf ("%f", &n1);
	
	if (menu=='a'){
		n1=sqrt(n1);
		printf("A sua raiz quadrada � %f", n1);
	}
	else if (menu=='b'){
		n1=n1/2;
		printf("A sua metade � %f",n1);
	}
	else if (menu=='c'){
		n1=n1*0.1;
		printf("O seu 10%% � %f",n1);
	}
	else if (menu=='d'){
		n1=n1*2;
		printf("O seu dobro � %f",n1);
	}
	getch();
				
}
	
