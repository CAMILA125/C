#include<stdio.h>
#include<conio.h>

main(){
	int i,r,valor;
	printf ("insira o numero que desejas ver a tabela:");
	scanf ("%d",&valor);
	for(i=0;i<=20;i++){
		r=valor*i;
		printf("2 * %d = %d\n",i,r);
	}
	getch();
}
