/*6. Escreva um programa que receba dois valores inteiros e mostre 
uma mensagem na tela informando se os n�meros s�o m�ltiplos ou n�o.
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"");
	
	int n1,n2;
	printf ("Dijite dois n� separados por v�rgula: ");
	scanf ("%d,%d",&n1,&n2);
	

	
	if (n1%n2==0){
		printf("S�o m�ltiplos");
	}
	else{
		printf("N�o s�o m�ltiplos");
	}
	
	getch();
}
