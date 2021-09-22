#include<stdio.h>

main(){
	int n1=0,n2=1, total,i;
	
	printf ("0\n1");
	for (i=0;i<=15;i++){
		total=n1+n2;
		n1=n2;
		n2=total;
		printf ("\n%d ",total);
	}
		
}
