#include<stdio.h>

main(){
	float vetor1[10],vetor2[10];
	int i,vetor3[10];
	for(i=0;i<10;i++){
		printf("\n%d - digite um numero para o primeiro vetor ",i);
		scanf("%f",&vetor1[i]);
		printf("%d - digite um numero para o segundo vetor: ",i);
		scanf("%f", &vetor2[i]);
		
		
		if(vetor1[i]==vetor2[i]) 
			vetor3[i]=1;
		else  
			vetor3[i]=0;
	}
	for(i=0;i<10;i++){	
		printf("\nvetor[%d] e vetor[%d] = %d",i,i,vetor3[i]);
	}
}
