#include<stdio.h>

main(){
	
	int n1,i;
	
	while (n1!=999){
		printf("\ndigite um numero: ");
		scanf("%d",&n1);
		
		if(n1%2!=0) {
		i++;
	
		}

		printf("\npara encerrar digite 999");
		
	}
	i=i-1;
		printf("\n%d sao impares",i);
}
