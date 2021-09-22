#include<stdio.h>

main(){
	int vetor1[10], vetor2[10],i;
	
	for(i=0;i<10;i++){
		printf("digite um numero: ");
		scanf("%d",&vetor1[i]);
	}
	for(i=0;i<10;i++){
		vetor2[i]=vetor1[i-1];
	}
	printf ("antes: ");
	for(i=0;i<10;i++){
		printf(" %d ",vetor1[i]);	
	}
	printf ("\ndepois: ");
	for(i=0;i<10;i++){
		printf(" %d ",vetor2[i]);
	}
}
