/* 
Autor: camila munzlinger     
01) Fa�a um programa que leia um n�mero inteiro N menor que 26. O programa deve apresentar todos os n�meros de 1 at� 100,
substituindo os m�ltiplos do n�mero informado pela palavra �pi�.   */ 
#include<stdio.h>

main(){
	
	int x=0,i=0;

	printf ("digite um numero: ");
	scanf ("%d", &x);
	
	for(i=1;i<=100;i++){
	
		if (i%x==0) {
		printf ("\npi");
		}
		else {
		printf ("\n%d", i);	
		
		}

	}

}
