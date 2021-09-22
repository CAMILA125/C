#include<stdio.h>
main(){
	int i,y,n1=1;
	
	for(i=0;i<=15;i++){
		for ( y=0;y<i;y++){
			n1=n1*3;
		
		}
		printf("\n3^%d = %d",i,n1);
		n1=1;
	}
	
}
