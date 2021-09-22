#include<stdio.h>

main(){
	char vetor[100],i;
	
	for(i=0;i<100;i++){
		if(i%2==0){
			vetor[i]='x';
		}
		else 
			vetor[i]='o';
	}
	printf("%s",vetor);
}
