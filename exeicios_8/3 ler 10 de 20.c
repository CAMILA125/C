#include<stdio.h>

main(){
	float vetor[20];
	int i;
	
	for(i=0;i<20;i++){
		if(i<=9){
			printf("digite um numero: ");
			scanf("%f", &vetor[i]);
		}
		else{
			if (i%2==0) {
			vetor[i] = i*1.02;
			}
			else{
			vetor[i] = i*1.05;
			}
		}
		printf("\nx posicao [%d]: %.2f ",i,vetor[i]);
	}	
	/*for(i=0;i<20;i++){
		
		printf("\nx posicao [%d]: %.2f ",i,vetor[i]);
	}*/
}
