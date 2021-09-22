#include<stdio.h>

main(){
	int x[6],y[6],i;
	
	for(i=0;i<6;i++){
		printf("digite um numero: ");
		scanf ("%d",&x[i]);
	}	
	for(i=0;i<6;i++){
		if (i%2==0) {
			y[i]=x[i+1];
		}
		else{
			y[i]=x[i-1];
		}
		printf("\nx posicao [%d]: %d \ny posicao [%d]: %d\n",i,x[i],i,y[i]);
	}
}
