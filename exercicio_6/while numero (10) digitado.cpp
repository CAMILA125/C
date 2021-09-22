#include<stdio.h>

main(){
	int n1=1,r;
	while (n1!=0){
		printf("\n digite um numero:");
		scanf("%d",&n1);
		
		if(n1==10){
			r++;
		}
	}
	printf("o 10 foi digitado %d vezes",r);
}
