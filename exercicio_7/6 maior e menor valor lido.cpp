#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"");
	int menor=1000000, maior=-99999, x;
	
		do{
		printf ("\nDigite um numero: ");
		scanf ("%d",&x);
		
		if (x<0){
			printf ("%d é o menor\n%d é o maior", menor, maior);
		}
		else {
			if (x < menor ) menor = x;
			if (x > maior) maior = x;
		}
		
	} while (x >= 0);
	
	


	
}
