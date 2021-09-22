#include<stdio.h>
#include<conio.h>

main(){
	int n1,n2,n3,i,r;
	for(i=1;i<=20;i++){
		printf ("insira as 3  notas separadas por pnto e virgula:");
		scanf ("%d; %d; %d",&n1,&n2,&n3);
		
		r=(n1+n2+n3)/3;
		printf("%d\n",r);
	}
	getch();
}
