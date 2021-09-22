#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int n_aleatorio, teste,tentativas;
	time_t t;
	srand(time (&t));
	
	n_aleatorio = rand() % 50;
	
	do {
		printf ("Digite um numero: ");
		scanf ("%d", &teste);
		
		if (teste < n_aleatorio) 
			printf ("nao desista ainda logo, logo, chegas la!\no numero escolhido é menor\n");
		else if (teste > n_aleatorio) 
			printf ("nao desista ainda logo, logo, chegas la!\no numero escolhido é maior\n");
		
		tentativas++;
		
	} while (teste != n_aleatorio);
	printf ("voce acertou! O numero escolhido era %d e suas tentatifaas foram %d",n_aleatorio,tentativas);
}
