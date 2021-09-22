/*6. Escreva um programa que receba dois valores inteiros e mostre 
uma mensagem na tela informando se os números são múltiplos ou não.
*/
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"");
	
	int n1,n2;
	printf ("Dijite dois nº separados por vírgula: ");
	scanf ("%d,%d",&n1,&n2);
	

	
	if (n1%n2==0){
		printf("São múltiplos");
	}
	else{
		printf("Não são múltiplos");
	}
	
	getch();
}
