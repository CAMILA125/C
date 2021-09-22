#include<stdio.h>
main(){
	int i,base,expoente,n1=1;
	printf(" \nBase: ");
	scanf("%d",&base);
	printf("expoente:");
	scanf("%d",&expoente);
	
	for(i = 0;i<expoente;i++){
		n1 = n1 * base;
	}
	printf("\n%d^%d = %d",base,expoente,n1);
		
}
