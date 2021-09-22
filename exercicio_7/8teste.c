#include<stdio.h>

void main(){
	
	int numero=0,i;
	
	printf("digite um numero: ");
	scanf("%d",&numero);

	
	for (i=2; i<numero;++i) {
		if(numero%i==0){
			printf("nao e primo");
			return;
		}
	}
	
	printf("é primo");	

}
