/*Construa um programa em C que receba 3 valores X, Y e Z reais e
 mostre uma mensagem na tela informando se a soma entre X e Y � 
 menor, maior ou igual a Z. 
 */
 #include<stdio.h>
 #include<locale.h>
 #include<conio.h>
 
 main( ){
 	setlocale(LC_ALL,"");
 	int x,y,z;
 	
 	printf ("Escreva tr�s n�meros separados por v�rgulas: ");
 	scanf ("%d, %d, %d", &x,&y,&z);
 	
 	if ((x+y)<z){
 		printf ("%d + %d < %d",x,y,z);
	}
	else if((x+y)>z){
		printf("%d + %d > %d",x,y,z);
	}	
 	else {
 		printf("%d + %d = %d",x,y,z);
 	}
 	
 	getch();
}
