/*AUTOR: CAMILA MUNZLINGER
3) Escreva um programa que receba letras informadas pelo usuário até que seja digitada 
a letra ‘w’. O programa deve mostrar no final de sua execução quantas das letras 
digitadas são vogais, quantas são consoantes e o total de letras digitadas. */
#include<stdio.h>

main(){
	int vogal=0,consoante=0,total=0;
	char x;
	
	 do {
		printf("digite uma letra: ");
		scanf("%c",&x);
		fflush (stdin);
	
		if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U')){
			vogal++;
		}
		else {
			consoante++;
		}
		total++;
			
	}while (x!='w'&& x!='W');
	
	printf("\nvogais: %d\nconsoantes: %d\ntotal: %d",vogal,consoante,total);
}
