#include<stdio.h>

main(){
	
	int numero,soma=0,inegativos=0,ipositivos=0;
	float media;
	
	do {
		printf("digite um numero qualquer: ");
		scanf ("%d", &numero);
	
		if (numero > 0){
			soma= numero+soma;
			ipositivos++;
		}
		else if (numero<0) {
			inegativos++;
		}
			
	} 	while (numero !=0);
	
	media= soma/ipositivos;
	
	printf ("%d numeros sao negativos \n %f e a media dos numeros positivos", inegativos, media);
}
